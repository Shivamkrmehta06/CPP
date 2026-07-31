class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> ump1;
        unordered_map<string,int> ump2;
        for(int i=0;i<words1.size();i++){
            ump1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            if(ump1.count(words2[i])) ump2[words2[i]]++;
        }
        int count = 0;
        for(auto x:ump2){
            if(ump1.count(x.first)&&x.second==1&&ump1[x.first]==1) count++; 
        }
        return count; 
    }
};