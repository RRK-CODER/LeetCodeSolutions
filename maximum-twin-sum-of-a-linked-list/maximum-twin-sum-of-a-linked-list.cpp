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
    int pairSum(ListNode* head) {
        ListNode *current = head;
        vector<int> v;
        while(current) {
            v.push_back(current->val);
            current = current->next;
        }
        int i=0, j=v.size()-1;
        int maxSum = 0;
        while(i<j)
        {
            maxSum = max(maxSum, v[i] + v[j]);
            i++;
            j--;

        }
        return maxSum;
    }
};