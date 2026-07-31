class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26,INT_MAX);
        for(auto word:words){
            vector<int> freq(26,0);
            for(auto x:word){
                freq[x-'a']++;
            }
            for(int i=0;i<26;i++){
                common[i] = min(common[i],freq[i]);
            }
        }
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(common[i]--){
                ans.push_back(string(1,i+'a'));
            }
        }
        return ans;
        }
};