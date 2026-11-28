class Solution {
    public int duplicateNumbersXOR(int[] nums) {
        // we need to do xor of the number which appears twice
        int ans=0;
        Map<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        for(Map.Entry<Integer,Integer> entry:mp.entrySet()){
            if(entry.getValue()==2){
                ans^=entry.getKey();
            }
        }
        return ans;
    }
}