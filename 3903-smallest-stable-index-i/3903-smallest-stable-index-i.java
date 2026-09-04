class Solution {
    public static int prefixMax(int[] nums,int start,int end){
        int ans=Integer.MIN_VALUE;
        for(int i=start;i<=end;i++){
            if(ans<nums[i]){
                ans=nums[i];
            }
        }
        return ans;
    }
    public static int suffixMin(int nums[],int start,int end){
        int ans=Integer.MAX_VALUE;
        for(int i=start;i<=end;i++){
            if(ans>nums[i]){
                ans=nums[i];
            }
        }
        return ans;
    }
    public int firstStableIndex(int[] nums, int k) {
        int max=Integer.MIN_VALUE;
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            int pMax=prefixMax(nums,0,i);
            int sMin=suffixMin(nums,i,nums.length-1);
            int diff=pMax-sMin;
            ans.add(diff);
        }
        for(int x:ans) System.out.println(x);
        int reAns=Integer.MAX_VALUE;
        for(int i=0;i<ans.size();i++){
            if(ans.get(i)<=k) return i;
        }
        return -1;
    }
}