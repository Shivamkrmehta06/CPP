class Solution {
public:
    bool checkString(string s) {
        for(int i=s.length()-1;i>=0;i--){
            if(i>0){
                if(s[i]=='a'&&s[i-1]=='b') return false;
            }
        }
        return true;
    }
};