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
    void reorderList(ListNode* head) {
        vector<int> v,res;
        ListNode *p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        for(auto i: v)
            cout<<i<<" ";
        cout<<endl;
        int j=v.size();
        for(int i=0; i<j; i++)
        {
            res.push_back(v[i]);
            j--;
            res.push_back(v[j]);
        }
        
        
        for(auto i: res)
            cout<<i<<" ";
        cout<<endl;
        int i=0;
        while(head){
            head->val= res[i];
            i++;
            head=head->next;
        }
    }
};