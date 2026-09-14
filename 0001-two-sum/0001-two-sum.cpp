class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        int need=0;
        for(int i=0;i<nums.size();i++){
            need=target-nums[i];
            if(mp.find(need)!=mp.end()){
                return {mp[need],i};
            }
            mp[nums[i]]=i;
        }
        for(auto x:ans) cout<<x<<" ";
        return {};
    }
};