class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer> mp=new HashMap<>();
        int left=0,cL=0;
        for(int right=0;right<s.length();right++){
            mp.put(s.charAt(right),mp.getOrDefault(s.charAt(right),0)+1);
            while(mp.get(s.charAt(right))>1){
                mp.put(s.charAt(left),mp.getOrDefault(s.charAt(left),0)-1);
                left++;
            }
            cL=Math.max(cL,right-left+1);
        }
        System.out.println(cL);
        return cL;
    }
}