class Solution {
    public int maxArea(int[] height) {
        int left=0,hei = -1,width = 0,right=height.length-1,ans = 0;
        while(left<right){
            width = right-left;
            hei = Math.min(height[left],height[right]);
            ans = Math.max(ans,width*hei);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return ans;
    }
}