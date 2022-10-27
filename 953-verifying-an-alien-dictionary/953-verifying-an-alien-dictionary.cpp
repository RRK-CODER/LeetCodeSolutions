class Solution {
public:
    unordered_map<char,char> mp;
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<order.size(); i++)
        {
            mp[order[i]]=i+'a';
        }
        for(auto& word : words)
		for(auto& c : word) c = mp[c];
	return is_sorted(begin(words), end(words));
    }
};