class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        set<int> se;
        for(auto x:ump) se.insert(x.second);
        if(se.size()>1) return false;
        return true;
    }
};