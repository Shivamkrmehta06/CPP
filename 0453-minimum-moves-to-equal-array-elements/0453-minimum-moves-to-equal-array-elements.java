class Solution {
    public int minMoves(int[] nums) {
        int mini=nums[0];
        for(int i=0;i<nums.length;i++){
            mini=Math.min(mini,nums[i]);
        }
        int count=0;
        for(int i=0;i<nums.length;i++){
            count+=nums[i]-mini;
        }
        System.out.println(count);
        return count;
    }
}