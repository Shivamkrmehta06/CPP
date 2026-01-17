// Input: nums = [-1,2,1,-4], target = 1
// Output: 2

// arr = {-4,-1,-1,0,1,2};
// {-1 -1 2} {-1 0 1}


#include <iostream>
using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int threeSum(vector<int> &arr, int target){
    bubbleSort(arr);
    for(int i = 0;i<arr.size()-2;i++){
        int left = i+1;
        int right = arr.size()-1;
        int sum;
        int closestSum = arr[0] + arr[1] + arr[2];
        while(left<right){
            sum = arr[left]+arr[right]+arr[i];
            if(abs(sum - target) < abs(closestSum - target)){
                closestSum = sum;
            if(sum < target) left++;
            else if(sum > target) right--;
            else return sum;  
        }
            
        }
    }
}

int main() {
    vector<int> arr = {-4,-1,-1,0,1,2};
    //threeSum(arr);
    return 0;
}
