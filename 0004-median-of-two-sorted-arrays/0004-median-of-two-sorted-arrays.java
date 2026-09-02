class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        if(nums1.length>nums2.length){
            int[] temp=nums1;
            nums1=nums2;
            nums2=temp;
        }
        int m=nums1.length,n=nums2.length;
        int left=0,right=m;
        int half=(m+n+1)/2;
        double ans=0;
        while(left<=right){
            int partition1=(left+right)/2;
            int partition2=half-partition1;
            int left1=(partition1==0)?Integer.MIN_VALUE:nums1[partition1-1];
            int right1=(partition1==m)?Integer.MAX_VALUE:nums1[partition1];
            int left2=(partition2==0)?Integer.MIN_VALUE:nums2[partition2-1];
            int right2=(partition2==n)?Integer.MAX_VALUE:nums2[partition2];
            if(left1<=right2&&left2<=right1){
                if((m+n)%2==1){
                    ans= Math.max(left1,left2);
                    break;
                }else{
                    ans= (Math.max(left1,left2)+Math.min(right1,right2))/2.0;
                    break;
                }
            }else if(left1>right2){
                right=partition1-1;
            }else{
                left=partition1+1;
            }
        }
        System.out.println(ans);
        return ans;
    }
}