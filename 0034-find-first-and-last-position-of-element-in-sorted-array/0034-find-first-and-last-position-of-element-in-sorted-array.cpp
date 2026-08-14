class Solution {
private:
    int firstOccurenece(vector<int> &arr,int target){
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        int mid = low+(high-low)/2;
        while(low<=high){
            if(arr[mid]==target){
                ans=mid;
                high = mid-1;
            }else if(arr[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }

    int lastOccurenece(vector<int> &arr,int target){
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        int mid = low+(high-low)/2;
        while(low<=high){
            if(arr[mid]==target){
                ans=mid;
                low = mid+1;
            }else if(arr[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccurenece(nums,target),lastOccurenece(nums,target)};
    }
};