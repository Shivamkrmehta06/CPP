class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        long long pos=0,neg=0;
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        for(int i=mid;i<nums.size();i++){
            pos+=nums[i];
        }
        for(int i=0;i<mid;i++){
            neg+=nums[i];
        }
        long long ans=pos-neg;
        cout<<ans<<endl;
        return ans;
    }
};