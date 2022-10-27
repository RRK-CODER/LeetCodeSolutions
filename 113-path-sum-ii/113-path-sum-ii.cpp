
class Solution {
public:
    void findpaths(TreeNode* node, int sum, vector<int> &path, vector<vector<int>> &paths ){
    if(!node) return;
    path.push_back(node->val);
    if(!(node->left) && !(node->right) && (sum==node->val))
        paths.push_back(path);
    findpaths(node->left, sum-node->val, path, paths);
    findpaths(node->right, sum-node->val , path, paths);
    path.pop_back();
}
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> paths;
        vector<int> path;
        findpaths(root,sum,path,paths);
        return paths;
    }
};
