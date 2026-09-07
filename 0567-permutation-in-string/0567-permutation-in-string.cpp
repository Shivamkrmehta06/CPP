class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> need;
        map<char,int> window;
        for(int i=0;i<s1.length();i++){
            need[s1[i]]++;
        }
        int left=0,k=s1.length();
        for(int r=0;r<s2.length();r++){
            window[s2[r]]++;
            if((r-left+1)>k){
                window[s2[left]]--;
                if(window[s2[left]]==0){
                    window.erase(s2[left]);
                }
                left++;
            }
            if(r-left+1==k){
                if(window==need) return true;
            }          
        }
        return false;
    }
};