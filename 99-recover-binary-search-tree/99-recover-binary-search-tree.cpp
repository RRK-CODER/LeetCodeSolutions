class Solution {
public:
     TreeNode* prev=NULL, *first=NULL , *second=NULL;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        inorder(root->left);
        if(prev!=NULL && root->val< prev->val)
        {
            if(first==NULL)
                first=prev;
            second=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
       prev=new TreeNode(INT_MIN);
        inorder(root);
        swap(first->val, second->val);
        
    }
};