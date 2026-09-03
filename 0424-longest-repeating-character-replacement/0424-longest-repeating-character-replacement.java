class Solution {
    public int characterReplacement(String s, int k) {
        int left=0,maxFreq=0,ans=0;
        Map<Character,Integer> mp=new HashMap<>();
        for(int right=0;right<s.length();right++){
            mp.put(s.charAt(right),mp.getOrDefault(s.charAt(right),0)+1);
            maxFreq=Math.max(maxFreq,mp.get(s.charAt(right)));
            while((right-left+1)-maxFreq>k){
                mp.put(s.charAt(left),mp.getOrDefault(s.charAt(left),0)-1);
                left++;
            }
            ans=Math.max(ans,right-left+1);
        }
        System.out.println(ans);
        return ans;
    }
}