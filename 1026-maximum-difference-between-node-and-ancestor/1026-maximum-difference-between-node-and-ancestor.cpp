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
    int helper(TreeNode* root, int currmin, int currmax)
    {
        if(root==NULL) return currmax-currmin;
  
    currmax=max(root->val,currmax);
    currmin=min(root->val,currmin);
    int l=helper(root->left,currmin, currmax);
    int r=helper(root->right, currmin, currmax);
    return max(l,r);
}
    int maxAncestorDiff(TreeNode* root) {
    if(root==NULL) return 0;
        return helper(root,root->val,root->val);
    }
};