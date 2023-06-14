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
    int inorderTraversal(TreeNode* root, int &val , int &min_diff)
    {
        if(root->left!=NULL)
            inorderTraversal(root->left, val, min_diff);
        if(val>=0)
            min_diff=min(min_diff, root->val - val);
            val=root->val;
        if(root->right!=NULL)
            inorderTraversal(root->right, val, min_diff);
        return min_diff;
    }
public:
    int minDiffInBST(TreeNode* root) {
        auto min_diff=INT_MAX, val=-1;
        return inorderTraversal(root, val, min_diff);
    }
};