class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int max=0;
        for(int pile:piles){
            max = Math.max(max,pile);
        }
        int ans = 0;
        while(low<=max){
            int mid=low+(max-low)/2;
            long hours = 0;
            for(int pile:piles){
                hours+=(pile+mid-1)/mid;
            }
            if(hours<=h){
                ans=mid;
                max=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}