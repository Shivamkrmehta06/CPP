class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int currentNum=x;
                int currentStreak=1;
                while(st.find(currentNum+1)!=st.end()){
                    currentNum++;
                    currentStreak++;
                }
                longest=max(longest,currentStreak);
            }
        }
        return longest;
    }
};