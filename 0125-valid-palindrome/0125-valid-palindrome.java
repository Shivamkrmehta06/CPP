class Solution {
    public boolean isPalli(String s){
        int left=0;
        int right=s.length()-1;
        while(left<=right){
            if(s.charAt(left)!=s.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    public boolean isPalindrome(String s) {
        String ans = "";
        for(int i=0;i<s.length();i++){
            char ch = Character.toLowerCase(s.charAt(i));
            if(Character.isLetter(ch)||Character.isDigit(ch)){
                ans = ans+ch;
            }
        }
        return isPalli(ans);
    }
}