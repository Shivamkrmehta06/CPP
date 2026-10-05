class Solution {
    public int subarraySum(int[] nums, int k) {
        Map<Integer,Integer> mp=new HashMap<>();
        mp.put(0,1);
        int currentSum=0;
        int count=0;
        for(int x:nums){
            currentSum+=x;
            int prevSum=currentSum-k;
            if(mp.containsKey(prevSum)){
                count+=mp.get(prevSum);
            }
            mp.put(currentSum,mp.getOrDefault(currentSum,0)+1);
        }
        return count;
    }
}