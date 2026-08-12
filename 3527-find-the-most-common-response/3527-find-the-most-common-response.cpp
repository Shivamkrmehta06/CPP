class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> ump;
        for(int i=0;i<responses.size();i++){
            set<string> s(responses[i].begin(),responses[i].end());
            for(auto x:s){
                ump[x]++;
            }
        }
        int maxi = 0;
        string ans = "";
        for(auto x:ump){
            if(x.second>maxi||(x.second == maxi && (ans == "" || x.first < ans))){
                maxi = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};