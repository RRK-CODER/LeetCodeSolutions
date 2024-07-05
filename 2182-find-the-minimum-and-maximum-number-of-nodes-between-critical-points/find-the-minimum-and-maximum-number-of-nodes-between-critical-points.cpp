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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head, *cur=head->next;
        vector<int> res;
        int pos=1;
        while(cur->next!=NULL){
            if(cur->val>prev->val && cur->val> cur->next->val)
                {
                cout<<"local maxima is"<<cur->val<<endl;
                res.push_back(pos);
                }
            else if(cur->val < prev->val && cur->val < cur->next->val)
                {
                cout<<"local minima is"<<cur->val<<" "<<endl;
                res.push_back(pos);
                }
            pos++;
            prev=cur;
            cur=cur->next;
        }
        if(res.size()==0 || res.size()==1){
            return {-1,-1};
        }
        int mini=INT_MAX;
        for(int i=0;i<res.size()-1;i++){
            mini=min(mini,res[i+1]-res[i]);
        }
        int m =res.size();
        int maxi=res[m-1]-res[0];

        return {mini,maxi};
    }
};