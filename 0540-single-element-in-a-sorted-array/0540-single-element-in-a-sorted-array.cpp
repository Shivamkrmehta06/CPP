class Solution {
private:
    int binarySearch(vector<int> &arr){
        int start=0,end=arr.size()-1;
        int mid = start+(end-start)/2;
        while(start<end){
            if(mid%2==1) mid--;
            if(arr[mid]==arr[mid+1])
                start=mid+2;
            else end=mid;
            mid = start+(end-start)/2;
        }
        return start;
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        int as = binarySearch(nums);
        return nums[as];
    }
};