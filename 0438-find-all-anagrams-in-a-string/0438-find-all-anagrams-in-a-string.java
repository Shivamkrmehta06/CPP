class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int left=0;
        List<Integer> li=new ArrayList<>();
        Map<Character,Integer> need=new HashMap<>();
        Map<Character,Integer> window=new HashMap<>();
        for(int i=0;i<p.length();i++){
            need.put(p.charAt(i),need.getOrDefault(p.charAt(i),0)+1);
        }
        int k=p.length();
        for(int right=0;right<s.length();right++){
            window.put(s.charAt(right),window.getOrDefault(s.charAt(right),0)+1);
            if((right-left+1)>k){
                window.put(s.charAt(left),window.getOrDefault(s.charAt(left),0)-1);
                if(window.get(s.charAt(left))==0){
                    window.remove(s.charAt(left));
                }
                left++;
            }
            if((right-left+1)==k){
                if(window.equals(need)){
                    li.add(left);
                }
            }
        }
        return li;
    }
}