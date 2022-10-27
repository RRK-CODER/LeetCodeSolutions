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
    TreeNode* rightmostNode(TreeNode * root)
    {
if(root==nullptr) return nullptr;
        TreeNode * temp=root->left;
        while(temp!=nullptr && temp->right!=nullptr)
            temp=temp->right;
        return temp;
    }
    void flatten(TreeNode* root) {
      if(root==NULL) return;
     flatten(root->left);
  TreeNode* rightmost=rightmostNode(root);
        if(rightmost!=nullptr)
        {
        rightmost->right=root->right;
            root->right=root->left;
            root->left=nullptr;
        }
        flatten(root->right);
      
    }
};