class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> mp;
        string left="";
        string mid="";
        string right="";
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto x:mp){
            left += string(x.second/2,x.first);
            if(x.second%2){
                mid.push_back(x.first);
            }
        }
        right = left;
        reverse(right.begin(),right.end());
        string ans = left+mid+right;
        return ans;
    }
};