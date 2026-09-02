class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer> freq = new HashMap<>();
        int left=0,currentLength=0;
        for(int right=0;right<s.length();right++){
            freq.put(s.charAt(right),freq.getOrDefault(s.charAt(right),0)+1);
            while(freq.get(s.charAt(right))>1){
                freq.put(s.charAt(left),freq.getOrDefault(s.charAt(left),1)-1);
                left++;
            }
            currentLength=Math.max(currentLength,right-left+1);
        }
        return currentLength;
    }
}