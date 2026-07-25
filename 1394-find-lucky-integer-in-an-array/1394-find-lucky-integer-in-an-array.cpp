class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> ump;
        for(int i=0;i<arr.size();i++){
            ump[arr[i]]++;
        }
        int ans = -1;
        for(auto x:ump){
            if(x.first==x.second){
                ans = max(ans,x.first);
            }
        }
        return ans;
    }
};