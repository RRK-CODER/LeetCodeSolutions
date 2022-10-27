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
    TreeNode* ok(vector<int>& pre, vector<int>& in,int &idx, int st, int ed, unordered_map<int, int> &mymap)
    {
if(idx>pre.size() || st>ed) return NULL;
        TreeNode* root = new TreeNode(pre[idx]);
        int mid=mymap[pre[idx++]];
        root->left=ok(pre,in,idx,st,mid-1,mymap);
        root->right=ok(pre,in,idx,mid+1,ed,mymap);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int> mymap;
        for(int i=0; i<in.size(); i++){
            mymap[in[i]]=i;
             }
        int idx=0;
        return ok(pre,in, idx,0, in.size()-1,mymap);
    }
};