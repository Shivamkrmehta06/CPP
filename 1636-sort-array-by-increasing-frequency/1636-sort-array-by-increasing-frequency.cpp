class Solution {
private:
    void solve(unordered_map<int,int> &ump,vector<int> &ans){
        if(ump.empty()){
            return;
        }
        int minfreq = INT_MAX;
        int mini=0;
        for(auto x:ump){
            if(minfreq>x.second){
                minfreq = x.second;
                mini = x.first;
            }
            if (x.second == minfreq && x.first > mini) {
                mini = x.first;
            }
        }
        for(int i=0;i<minfreq;i++){
            ans.push_back(mini);
        }
        ump.erase(mini);
        solve(ump,ans);
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        vector<int> ans;
        solve(ump,ans);
        for(auto x:ans) cout<<x<<" ";
        return ans;
    }
};