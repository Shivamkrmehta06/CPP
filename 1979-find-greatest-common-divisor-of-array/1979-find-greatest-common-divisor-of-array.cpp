class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto mixi = minmax_element(nums.begin(),nums.end());
        int maxi = *(mixi.second);
        int mini = *(mixi.first);
        
        while(mini!=0){
            int temp = mini;
            mini = maxi%mini;
            maxi = temp;
        }
        return maxi;
    }
};