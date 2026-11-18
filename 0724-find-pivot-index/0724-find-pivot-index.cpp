class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        int left=0;
        for(int i=0;i<nums.size();i++){
            left+=nums[i];
            int right = totalSum-left+nums[i];
            if(left==right) return i;
        }
        return -1;
    }
};