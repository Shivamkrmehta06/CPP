class Solution {
    public long sqrt(int x){
        long start=0,end=x;
        long ans=0;
        while(start<=end){
            long mid=start+(end-start)/2;
            if(mid*mid<=x){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
    public int mySqrt(int x) {
        return (int)sqrt(x);
    }
}