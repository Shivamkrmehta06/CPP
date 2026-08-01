class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<char> lower;
        vector<char> upper;
        for(auto x:word){
            if(islower(x)){
                lower.push_back(x);
            }else{
                upper.push_back(x);
            }
        }
        unordered_set<int> counted;
        int count = 0;
        for(auto x:upper){
            char ch = tolower(x);

            if(counted.count(ch))
                continue;

            auto it = find(lower.begin(), lower.end(), ch);

            if(it != lower.end()) {
                count++;
                counted.insert(ch);
            } 
        }
        return count;
    }
};