class Solution {
private:
    void solve(map<int,int> &mp,int &k,vector<int> &ans,int &maxi,int &max_freq){
        if(k==0) return;
        max_freq=INT_MIN;
        for(auto x:mp){
            if(x.second>max_freq){
                max_freq=x.second;
                maxi=x.first;
            }
        }
        ans.push_back(maxi);
        mp.erase(maxi);
        k--;
        solve(mp,k,ans,maxi,max_freq);
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int max_freq=INT_MIN;
        int maxi;
        solve(mp,k,ans,maxi,max_freq);
        return ans;
    }
};