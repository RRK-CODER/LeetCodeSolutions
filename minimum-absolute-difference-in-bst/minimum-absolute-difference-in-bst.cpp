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
    int inorderTraversal(TreeNode* root, int &val, int& min_dif)
    {
        if(root->left!=NULL)
            inorderTraversal(root->left, val, min_dif);
        if(val>=0)
            min_dif = min(min_dif, root->val-val);
            val=root->val;
        if(root->right !=NULL)
            inorderTraversal(root->right, val, min_dif);
        return min_dif;
    }
public:
    int getMinimumDifference(TreeNode* root) {
        auto min_dif = INT_MAX, val=-1;
        return inorderTraversal(root, val, min_dif);
    }
};