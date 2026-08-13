class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow=0,fast=0,k=0;
        for(fast;fast<nums.size();fast++){
            if(nums[fast]!=val){
                k++;
                nums[slow]=nums[fast];
                slow++;
            }
        }
        cout<<k<<endl;
        return k;
    }
};