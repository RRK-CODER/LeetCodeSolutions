/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode dummy(0);
        dummy.next=head;
        ListNode *prev=&dummy;
        
        while(prev->next){
            ListNode *curr=prev->next;
            if(curr->next && curr->next->val==curr->val){
                do{
                    ListNode* temp=curr->next->next;
                    delete curr->next;
                    curr->next=temp;
                }while(curr->next && curr->next->val==curr->val);
                prev->next=curr->next;
                delete curr;
            }
            else{
                 prev=prev->next;
            }
               
        }
        return dummy.next;
    }
};