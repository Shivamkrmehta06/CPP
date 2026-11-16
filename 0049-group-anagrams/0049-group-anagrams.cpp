class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            ump[temp].push_back(strs[i]);
        }
        for(auto x:ump) {
            ans.push_back(x.second);
        }
        return ans;
    }
};