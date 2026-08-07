class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int left=0,currLen=0;
        for(int right=0;right<s.length();right++){
            //char add karo
            freq[s[right]]++;
            //handle duplicates
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            //update the answer
            currLen=max(currLen,right-left+1);
        }
        return currLen;
    }
};