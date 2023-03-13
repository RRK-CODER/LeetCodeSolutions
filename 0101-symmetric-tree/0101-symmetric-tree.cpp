class Solution {
public:
    bool ok(TreeNode* p, TreeNode* q)
    {
if(p==NULL && q==NULL) return true;
if(p==NULL || q==NULL) return false;
if(p->val!=q->val) return false;
return ok(p->left,q->right) && ok(p->right,q->left);
    }
    
    
bool isSymmetric(TreeNode* root) {
        if(root==NULL) return false;
       return ok(root->left,root->right);
    }
};