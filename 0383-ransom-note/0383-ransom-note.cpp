class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i = 0;i<magazine.length();i++){
            mp[magazine[i]]++;
        }
        for(auto x:mp){
            cout<<x.first<<"->"<<x.second<<endl;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(mp[ransomNote[i]]==0){
                return false;                
            }
            mp[ransomNote[i]]--;
        }
        return true;
    }
};