class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(int i=0;i<=nums.size()-k;i++){
            unordered_set<int> seen;
            for(int j=0;j<k;j++){
                seen.insert(nums[i+j]);
            }
            for(auto x:seen){
                ump[x]++;
            }
        }
        int ans = -1;
        for(auto x:ump){
            if(x.second==1&&x.first>ans){
                ans = x.first;
            }
        }
        return ans;
    }
};