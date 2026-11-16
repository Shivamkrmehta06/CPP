class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        unordered_map<char,int> ump2;
        for(int i=0;i<t.length();i++){
            ump2[t[i]]++;
        }
        return ump==ump2;
    }
};