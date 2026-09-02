class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int left=0,cL=0;
        int zC=0;
        for(int right=0;right<nums.length;right++){
            if(nums[right]==0){
                left=right+1;
            }
            cL=Math.max(cL,right-left+1);
        }
        System.out.println(cL);
        return cL;
    }
}