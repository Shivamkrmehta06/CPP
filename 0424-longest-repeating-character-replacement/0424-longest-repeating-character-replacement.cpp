class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0,maxFreq = 0,ans=0;
        unordered_map<char,int> freq;
        for(int right=0;right<s.length();right++){
            // frequency add karo
            freq[s[right]]++;
            maxFreq = max(maxFreq,freq[s[right]]);
            while((right-left+1)-maxFreq>k){
                freq[s[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};