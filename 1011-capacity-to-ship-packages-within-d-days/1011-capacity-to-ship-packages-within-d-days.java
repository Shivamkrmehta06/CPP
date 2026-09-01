class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int low=0,high=0,ans=0;
        for(int x:weights){
            low=Math.max(low,x);
            high+=x;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int dayNumber=1;
            int currentWeight=0;
            for(int w:weights){
                if(currentWeight+w>mid){
                    dayNumber++;
                    currentWeight=w;
                }else{
                    currentWeight+=w;
                }
            }if(dayNumber<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}