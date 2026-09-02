class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double max=sum;
        for(int i=0;i<nums.length-k;i++){
            sum=sum-nums[i]+nums[k+i];
            max=Math.max(sum,max);
        }
        return max/k;
    }
}