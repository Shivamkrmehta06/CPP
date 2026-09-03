class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if(s1.length()>s2.length()) return false;
        Map<Character,Integer> need=new HashMap<>();
        Map<Character,Integer> window=new HashMap<>();
        for(int i=0;i<s1.length();i++){
            need.put(s1.charAt(i),need.getOrDefault(s1.charAt(i),0)+1);
        }
        int k=s1.length();
        int left=0;
        for(int right=0;right<s2.length();right++){
            window.put(s2.charAt(right),window.getOrDefault(s2.charAt(right),0)+1);
            if(right-left+1>k){
                window.put(s2.charAt(left),window.get(s2.charAt(left))-1);
                if(window.get(s2.charAt(left))==0){
                    window.remove(s2.charAt(left));
                }
                left++;
            }
            if(right-left+1==k){
                if(window.equals(need)){
                    return true;
                }
            }
        }
        return false;
    }
}