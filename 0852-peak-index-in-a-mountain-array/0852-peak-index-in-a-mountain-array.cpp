class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start+(end-start)/2;
        while(start<=end){
            if(mid > 0 && mid < arr.size() - 1&&arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                cout<<mid<<endl;
                return mid;
            }else if(mid > 0 && mid < arr.size() - 1&&arr[mid]<arr[mid+1]){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return 1;
    }
};