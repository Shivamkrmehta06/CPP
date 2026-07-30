class Solution {
public:
    int secondHighest(string s) {
        int prev = -1;
        int max=-1;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(isdigit(ch)){
                int d = ch - '0';
                if(d>max){
                    prev = max;
                    max = d;
                }if(d<max&&d>prev){
                    prev=d;
                }
            }
        }
    
        return prev;
    }
};