/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int res=-1;
        ListNode* headA=head1;
        ListNode* headB=head2;
        while(headA!=NULL && headB!=NULL && headA!=headB)
        {
             headA=headA->next;
            headB=headB->next;
            if(headA==headB)
            {
                return headA;
            }
           
           
            if (headA == NULL) headA = head2;
        if (headB == NULL) headB = head1;
           
        }
        return headA;
    }
};