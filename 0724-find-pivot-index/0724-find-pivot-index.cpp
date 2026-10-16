class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size());
        int prefixSum=0,suffixSum=0;
        for(auto x:nums){
            prefixSum+=x;
            prefix.push_back(prefixSum);
        }
        for(int i=nums.size()-1;i>=0;i--){
            suffixSum += nums[i];
            suffix[i]=suffixSum;
        }
        for(int i=0;i<suffix.size();i++){
            if(suffix[i]==prefix[i]) return i;
        }
        return -1;
    }
};