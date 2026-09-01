class Solution {
    public int findMin(int[] nums) {
        int left=0,high=nums.length-1;
        int ans=-1;
        while(left<=high){
            int mid=left+(high-left)/2;
            if(nums[mid]>=nums[high]){
                left=mid+1;
            }else{
                high=mid;
            }
        }
        return nums[high];
    }
}