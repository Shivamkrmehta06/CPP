class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> ch(indices.size());
        for(int i=0;i<indices.size();i++){
            ch[indices[i]] = s[i];
        }
        string ans;
        for(auto x:ch) ans.push_back(x);
        return ans;
    }
};