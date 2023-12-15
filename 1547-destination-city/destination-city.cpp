class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> city;
        for(auto i: paths) city.insert(i[0]);
        for(auto i: paths) 
            if(!city.count(i[1])) return i[1];
        return "";
    }
};