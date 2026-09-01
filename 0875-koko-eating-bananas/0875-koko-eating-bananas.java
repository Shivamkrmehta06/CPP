class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high=0;
        for(int x:piles){
            high=Math.max(x,high);
        }
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long hours=0;
            for(int pile:piles){
                hours+=(pile+mid-1)/mid;
            }
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}