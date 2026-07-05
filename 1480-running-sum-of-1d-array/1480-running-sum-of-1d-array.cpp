class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            nums[i] = sum;
        }
        for(auto x:nums) cout<<x<<" ";
        return nums;
    }
};