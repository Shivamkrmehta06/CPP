class Solution {
    public int missingMultiple(int[] nums, int k) {
        Set<Integer> s=new HashSet<>();
        for(int x:nums) s.add(x);
        int mux=1;
        for(int i=1;i<=101;i++){
            mux=k*i;
            if(!s.contains(mux)){
                return mux;
            }
        }
        return -1;
    }
}