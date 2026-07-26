class Solution {
private:
    int binarySearchL(vector<int> nums,int start,int end,int target){
        int mid = start+(end-start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                end = mid-1;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
    int binarySearchR(vector<int> nums,int start,int end,int target){
        int mid = start+(end-start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                start = mid+1;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int xi = binarySearchL(nums,0,nums.size()-1,target);
        int xe = binarySearchR(nums,0,nums.size()-1,target);
        ans.push_back(xi);
        ans.push_back(xe);
        return ans;
    }
};