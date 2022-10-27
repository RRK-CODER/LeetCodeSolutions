/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
       auto head=root;
        for(;root;root=root->left)
            for(auto cur=root; cur; cur=cur->next)
                if(cur->left)
                {
                    cur->left->next=cur->right;
                    if(cur->next) cur->right->next=cur->next->left;
                }
        else break;
        return head;
        
    }
};