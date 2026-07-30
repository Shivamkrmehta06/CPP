class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        int sum=0;
        for(auto x:ump){
            if(x.second==1){
                sum+=x.first;
            }
        }

        return sum;
    }
};