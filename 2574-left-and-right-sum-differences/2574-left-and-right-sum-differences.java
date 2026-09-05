class Solution {
    public int[] leftSum(int[] nums){
        int[] ans=new int[nums.length];
        ans[0]=0;
        int sum=nums[0];
        for(int i=1;i<nums.length;i++){
            ans[i] = sum;
            sum+=nums[i];
        }
        return ans;
    }
    public int[] rightSum(int[] nums){
        int[] ans=new int[nums.length];
        ans[nums.length-1]=0;
        int sum=nums[nums.length-1];
        for(int i=nums.length-2;i>=0;i--){
            ans[i]=sum;
            sum+=nums[i];
        }
        return ans;
    }
    public int[] leftRightDifference(int[] nums) {
        int[] sLeft=leftSum(nums);
        int[] sRight=rightSum(nums);
        int[] fArr=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            fArr[i]=Math.abs(sLeft[i]-sRight[i]);
        }
        return fArr;
    }
}