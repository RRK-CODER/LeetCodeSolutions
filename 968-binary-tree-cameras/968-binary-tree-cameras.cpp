/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#define tn TreeNode *
#define inf (1<<20)
map<pair<tn,pair<bool,bool>>, int>dp;
class Solution {
public:
    int solve(tn root, bool cam, bool parcam){
        if(root==NULL){
            if(cam) return inf;
            else return 0;
             }
        if(root->left==NULL && root->right==NULL){
            if(cam) 
                return 1;
            else{
                if(parcam)
                    return 0;
                else return inf;
            }
        }
        if(dp.find({root, {cam, parcam}})!=dp.end()) return dp[{root, {cam,parcam}}];
        if(cam){
            return dp[{root,{cam,parcam}}] =1 +min(solve(root->left,0,1),solve(root->left,1,1))+ min(solve(root->right,0,1),solve(root->right,1,1));
        }
        else{
            if(parcam){
                return dp[{root,{cam,parcam}}]=min(solve(root->left,0,0),solve(root->left,1,0))+min(solve(root->right,0,0),solve(root->right,1,0));
                 }
            else{
                int op1=solve(root->left,1,0)+min(solve(root->right,0,0),solve(root->right,1,0));
                int op2=solve(root->right,1,0)+min(solve(root->left,0,0),solve(root->left,1,0));
                return dp[{root,{cam,parcam}}]=min(op1,op2);
            }
        }
    }
    int minCameraCover(TreeNode* root) {
        dp.clear();
        return min(solve(root,0,0), solve(root,1,0));
    }
};