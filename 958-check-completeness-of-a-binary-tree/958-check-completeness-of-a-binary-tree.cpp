class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t==NULL){
                while(!q.empty()){
                    if(q.front()!=NULL)
                        return false;
                    q.pop();
                }
                return true;
            }
            else{
                q.push(t->left);
                q.push(t->right);
            }
        }
        return true;
    }
};