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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int diff=0;
        for(ListNode* cur=l1; cur; ++diff, cur=cur->next);
        for(ListNode* cur=l2; cur; --diff, cur=cur->next);
        if(diff<0){
            swap(l1, l2);
            diff=-diff;
        }
        ListNode *res= nullptr;
        while(l1){
            int val=l1->val;
            if(!diff)
                val += l2->val , l2=l2->next;
            else
                --diff;
            res = new ListNode(val , res);
            l1=l1->next;
        }
        int ost=0;
        ListNode * reversed= nullptr;
        while(res){
            ListNode *next= res->next;
            res->val += ost;
            res->next = reversed;

            if(res->val >9)
                res->val -= 10, ost=1;
            else
                ost=0;
                reversed = res;
                res=next;
        }
        if(ost) reversed = new ListNode(ost, reversed);
        return reversed;
    }
};