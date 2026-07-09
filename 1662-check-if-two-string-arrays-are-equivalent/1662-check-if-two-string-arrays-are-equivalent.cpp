class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        for(auto x:word1) s1+=x;
        for(auto x:word2) s2+=x;
        //cout<<s1<<endl<<s2<<endl;
        return s1==s2;
    }
};