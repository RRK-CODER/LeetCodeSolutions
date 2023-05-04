class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> cnt;
        string res;
        int max_count=0;
        for(int i=0; i<messages.size(); ++i)
        {
            int words= count(begin(messages[i]), end(messages[i]), ' ')+1;
            int total=cnt[senders[i]]+=words;
            if(total > max_count || (total==max_count && senders[i] > res))
            {
                 max_count=total;
                res=senders[i];
            }
               
        }
        return res;
    }
};