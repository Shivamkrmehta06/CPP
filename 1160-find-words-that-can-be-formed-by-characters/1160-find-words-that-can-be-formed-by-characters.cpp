class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> mp1;
        for(int i=0;i<chars.length();i++){
            mp1[chars[i]]++;
        }
        int count=0;
        for(int i=0;i<words.size();i++){
            map<char,int> temp=mp1;
            bool good=true;
            for(int j=0;j<words[i].length();j++){
                char ch=words[i][j];
                if(temp[ch]>0){
                    temp[ch]--;
                }else{
                    good=false;
                }
            }
            if(good){
                count+=words[i].length();
            }
        }
        cout<<count<<endl;
        return count;
    }
};