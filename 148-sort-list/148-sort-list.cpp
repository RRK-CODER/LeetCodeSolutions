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
    ListNode* sortList(ListNode* head) {
        ListNode* next=head;
        ListNode* next2=head;
        vector<int> v;
        while(next!=NULL)
        {
            v.push_back(next->val);
            next=next->next;
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            next2->val=v[i];
            next2=next2->next;
        }
         return head;
    }
};