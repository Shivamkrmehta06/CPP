class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        long sum=0;
        Map<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
        }
        long max=0;
        if(mp.size()==k) max=sum;
       
        for(int i=0;i<nums.length-k;i++){
            mp.put(nums[i],mp.get(nums[i])-1);
            if(mp.get(nums[i])==0){
                mp.remove(nums[i]);
            }
            sum-=nums[i];
            mp.put(nums[k+i],mp.getOrDefault(nums[k+i],0)+1);
            sum+=nums[k+i];
            if(mp.size()==k)
                max=Math.max(max,sum);
        }
        return max;
    }
}