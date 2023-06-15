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
        vector<int> levelSum;
    void dfs(TreeNode *root, int level=0){
            if(!root) return ;
            if(level >= levelSum.size()) 
                levelSum.push_back(root->val);
            else
                levelSum[level] += root->val;
            dfs(root->left, level+1);
            dfs(root->right, level+1);
        }
    int maxLevelSum(TreeNode* root) {
        dfs(root);
        return 1+max_element(levelSum.begin(), levelSum.end()) - levelSum.begin();
    }
};