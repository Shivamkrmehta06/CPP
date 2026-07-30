class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> ump;
        for(char ch='a';ch<='z';ch++){
            ump[ch];
        }
        for(auto x:sentence){
            ump[x]++;
        }
        for(auto x:ump){
            if(x.second==0) return false;
        };
        return true;
    }
};