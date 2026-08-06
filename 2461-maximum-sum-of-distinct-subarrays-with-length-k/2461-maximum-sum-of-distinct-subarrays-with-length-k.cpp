class Solution {
private:
    long long solve(vector<int> &nums,int k){
        long long sum = 0;
        unordered_map<int,int> ump;
        long long maxSum = sum;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            ump[nums[i]]++;
            if (ump.size() == k)
                maxSum = sum;
        }
        long long currentSum = sum;
        
        for(int i=k;i<nums.size();i++){
            currentSum = currentSum-nums[i-k];
            ump[nums[i-k]]--;
            if(ump[nums[i-k]]==0){
                ump.erase(nums[i-k]);
            }
            currentSum+=nums[i];
            ump[nums[i]]++;
            if(ump.size()==k){
                maxSum = max(maxSum,currentSum);
            }
        }
        return maxSum;
    }
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = solve(nums,k);
        return ans;
    }
};