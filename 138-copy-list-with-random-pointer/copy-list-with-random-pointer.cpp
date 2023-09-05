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
        unordered_map<Node*, Node*> mp;
        for(Node* curr=head; curr!=NULL; curr=curr->next )
            mp[curr] = new Node(curr->val);
        
        for(Node* curr=head; curr!=NULL; curr=curr->next)
        {
            Node* currNode = mp[curr];
            currNode->next = mp[curr->next];
            currNode->random = mp[curr->random];
        }
        Node* head2 = mp[head];
        return head2;
    }
};