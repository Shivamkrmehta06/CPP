class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        for(int i=0;i<t.length();i++){
            need[t[i]]++;
        }
        unordered_map<char,int> window;
        int left=0,have=0,minLen=INT_MAX,start=0;
        for(int right=0;right<s.length();right++){
            //updated window
            window[s[right]]++;
            //update have
            if(need.count(s[right])&&window[s[right]]==need[s[right]]){
                have++;
            }
            while(have==need.size()){
                //minLen = min(minLen,right-left+1);
                if(right-left+1<minLen){
                    minLen = right-left+1;
                    start = left;
                }
                window[s[left]]--;
                if(need.count(s[left])&&window[s[left]]<need[s[left]]){
                    have--;
                }
                left++;
            }
            
        }
        if (minLen == INT_MAX)
            return "";
        return s.substr(start,minLen);
    }
};