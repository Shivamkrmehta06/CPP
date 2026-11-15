class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int[] ans=new int[2];
        for(int i=0;i<nums.length;i++){
            int need=target-nums[i];
            if(mp.containsKey(need)){
                return new int[] {mp.get(need),i};
            }
            mp.put(nums[i],i);
        }
        return new int[] {-1,-1};
    }
}