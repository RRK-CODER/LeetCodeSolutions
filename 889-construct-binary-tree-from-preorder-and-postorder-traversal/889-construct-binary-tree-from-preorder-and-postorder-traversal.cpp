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
class Solution {
public:
    unordered_map<int, int > map;
    
    TreeNode* ok(int preStart, int preEnd, int postStart, int postEnd,vector<int>&pre, vector<int>& post)
    {
TreeNode *root=new TreeNode(pre[preStart]);
        if(preStart==preEnd) return root;
        int RootLeftSubTree=pre[preStart+1];
        int RootLeftSubTreePostIdx=map[RootLeftSubTree];
        int elementsInLeftSubTree= RootLeftSubTreePostIdx-postStart+1;
    root->left=ok(preStart+1,preStart+elementsInLeftSubTree, postStart, RootLeftSubTreePostIdx,pre,post);
        if(RootLeftSubTreePostIdx+1==postEnd) return root;
root->right=ok(preStart+elementsInLeftSubTree+1, preEnd, RootLeftSubTreePostIdx+1,postEnd-1,pre,post);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre,vector<int>& post) {
        for(int i=0; i<post.size(); i++) map[post[i]]=i;
        return ok(0,pre.size()-1,0,post.size()-1, pre, post);
    }
};