/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> hm;
        for(Node* curr=head; curr!=NULL; curr=curr->next)
        { hm[curr]=new Node(curr->val); }
        
        for(Node *curr= head; curr!=NULL; curr=curr->next)
        {
            Node *clonecurr=hm[curr];
            clonecurr->next=hm[curr->next];
            clonecurr->random=hm[curr->random];
        }
        Node*head2=hm[head];
        return head2;
    }
};