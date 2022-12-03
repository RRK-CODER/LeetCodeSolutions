class Solution {
public:
    string frequencySort(string s) {
        int count[256]={0};
        for(char ch:s)
            count[ch]++;
          sort(begin(s),end(s),[&](char a ,char b){
            return count[a]>count[b] || (count[a]==count[b] && a<b);
          });
        return s;
    }
};