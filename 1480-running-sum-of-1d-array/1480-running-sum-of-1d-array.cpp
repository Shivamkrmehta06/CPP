class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        stack<int> s;
        for(int i=nums.size()-1;i>=0;i--){
            s.push(nums[i]);
        }
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int x = s.top();
            sum += x;
            nums[i] = sum;
            s.pop();
        }
        for(auto x:nums) cout<<x<<" ";
        return nums;
    }
};