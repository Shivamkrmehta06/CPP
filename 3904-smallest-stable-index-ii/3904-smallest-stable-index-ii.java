class Solution {
    public int[] prefixMax(int[] nums){
        int[] ans=new int[nums.length];
        ans[0]=nums[0];
        for(int i=1;i<nums.length;i++){
            ans[i]=Math.max(nums[i],ans[i-1]);
        }
        return ans;
    }
    public int[] suffixMin(int[] nums){
        int[] ans=new int[nums.length];
        ans[nums.length-1]=nums[nums.length-1];
        for(int i=nums.length-2;i>=0;i--){
            ans[i]=Math.min(nums[i],ans[i+1]);
        }
        return ans;
    }
    public int firstStableIndex(int[] nums, int k) {
        int[] pMax=prefixMax(nums);
        int[] sMin=suffixMin(nums);
        int[] fArr=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            fArr[i]=pMax[i]-sMin[i];
        }
        for(int i=0;i<nums.length;i++){
            if(fArr[i]<=k){
                return i;
            }
        }
        return -1;
    }
}