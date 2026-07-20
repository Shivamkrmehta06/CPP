class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi = INT_MIN;
        for(auto x:mp){ 
            if(x.second>maxi){
                maxi = x.second;
            }
        }
        int sum = 0;
        for(auto i:mp){
            if(i.second==maxi){
                sum += i.second;
            }
        }
        return sum;
    }
};