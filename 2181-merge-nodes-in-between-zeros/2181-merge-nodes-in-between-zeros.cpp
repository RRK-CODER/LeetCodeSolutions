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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *slow=head, *fast=head->next;
        while(fast!=NULL)
        {
            int temp=0;
            while(fast->val!=0){
                temp += fast->val;
                fast=fast->next;
            }
            cout<<temp<<" ";
            slow->val = temp;
            fast = fast->next;
            slow->next = fast;
            slow = fast;
        }
        cout<<endl;
        return head;
    }
};