class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
      if(!root) return NULL;
        queue<TreeNode * > q;
        q.push(root);
        while(q.empty()==false)
        {
            TreeNode* curr=q.front();
            q.pop();
             swap(curr -> left, curr -> right);
           if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
            
        }
        return root;
    }
};
        