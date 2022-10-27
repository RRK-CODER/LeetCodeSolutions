class Solution {
private:
    void travel(Node* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }
       
        for (Node* child : root -> children) {
            travel(child, result);
        }
         
        result.push_back(root -> val);
    }
public:
    vector<int> postorder(Node* root)  {
        vector<int> result;
        travel(root, result);
        return result;
    }
};

