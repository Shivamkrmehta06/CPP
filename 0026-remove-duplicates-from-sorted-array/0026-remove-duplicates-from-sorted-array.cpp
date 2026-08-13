class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0,fast=0,k=0;
        for(fast;fast<nums.size();fast++){
            if(nums[slow]!=nums[fast]){
                k++;
                slow++;
                nums[slow]=nums[fast];
                
            }
        }
        for(auto x:nums) cout<<x<<" ";
        return slow+1;
    }
};