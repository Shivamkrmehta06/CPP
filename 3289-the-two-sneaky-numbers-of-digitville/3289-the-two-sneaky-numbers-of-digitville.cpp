class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        vector<int> ans;
        for(auto x:ump){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};