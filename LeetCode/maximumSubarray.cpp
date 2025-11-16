// // Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// // Output: 6
// // Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// #include <iostream>
// using namespace std;

// int getSum(vector<int> &nums){
//     int res = nums[0];
//     for(int i = 0;i<nums.size();i++){
//         int currSum = 0;
//         for(int j = i;j<nums.size();j++){
//             currSum = currSum + nums[j];
//             res = max(res,currSum);
//         }
        
//     }
//     return res;
// }

// // int largestSum(vector<int> &nums){

// // }

// int main() {
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout<<"Result: "<<getSum(nums);
//     return 0;
// }


//Kadane Algorithm

// #include <iostream>
// using namespace std;

// int kadaneAlgo(vector<int> &nums){
//     int maxEnd = nums[0];
//     int result = 0;
//     for(int i = 1;i<nums.size();i++){
//         maxEnd = max(nums[i],maxEnd+nums[i]);
//         result = max(result,maxEnd);
//     }
    
//     return result;
// }

// int main() {
//     vector<int> nums = {5,4,-1,7,8};
//     cout<<"Result: "<<kadaneAlgo(nums)<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int largestSum(vector<int> &nums){
    int result = INT32_MIN;
    int sum = nums[0];
    for(int i = 1;i<nums.size();i++){
        sum = sum + nums[i];
        result = max(result,sum);
        if(result<0){
            sum = 0;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<"Result: "<<largestSum(arr)<<endl;
    return 0;
}
