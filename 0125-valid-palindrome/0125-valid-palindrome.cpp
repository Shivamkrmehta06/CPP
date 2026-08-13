class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==1) return true;
        string se;
        transform(s.begin(),s.end(),s.begin(),[](unsigned char c){
            return tolower(c);
        });
        for(auto x:s){
            //char ch = tolower(x);
            if((x>='a'&&x<='z')||(x>='0'&&x<='9'))
                se.push_back(x);
            
        }
        int left=0,right=se.length()-1;
        while(left<right){
            if(se[left]!=se[right]) return false;
            left++;
            right--;
        }
        cout<<se<<endl;
        return true;
    }
};