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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* a1=list1, *a2=list1;
        for(int i=0; i<a-1; i++)
            a1=a1->next;
        for(int i=0; i<b; i++)
            a2=a2->next;
        a1->next=list2;
        while(list2->next!=NULL)
            list2=list2->next;
        list2->next=a2->next;
        return list1;
    }
};