class Solution {
public:
    int maxDifference(string s) {
        unordered_map<int,int> ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        int maxOdd = 0;
        int minEven = INT_MAX;;
        for(auto x:ump){
            if(x.second%2==0){
                minEven = min(minEven,x.second);
            }else{
                maxOdd = max(maxOdd,x.second);
            }
        }
        return maxOdd-minEven;
    }
};