class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int low=0,high=0;
        for(int x:weights){
            low=Math.max(low,x);
            high+=x;
        }
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int dN=1;
            int cW=0;
            for(int weigh:weights){
                if(cW+weigh>mid){
                    dN++;
                    cW=weigh;
                }else{
                    cW+=weigh;
                }
            }
            if(dN<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        System.out.print(ans);
        return ans;
    }
}