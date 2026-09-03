class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int left=0,cL=Integer.MAX_VALUE;
        int currentSum=0;
        for(int right=0;right<nums.length;right++){
            currentSum+=nums[right];
            while(currentSum>=target){
                cL=Math.min(cL,right-left+1);
                currentSum-=nums[left];
                left++;
            }
        }
        if(cL==Integer.MAX_VALUE) return 0;
        return cL;
    }
}