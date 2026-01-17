// Duplicates in an array 

#include <iostream>
using namespace std;

void bubbleSort(vector<int> &nums){
    for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                swap(nums[j],nums[i]);
            }
        }
    }
}

vector<int> remDup(vector<int> &nums){
    bubbleSort(nums);
    vector<int> res;
    for(int i = 0;i<nums.size();i++){
        int num = (nums[i]^nums[i+1]);
        if(num == 0){
            res.push_back(nums[i]);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans = remDup(arr);
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
    cout<<arr.back()<<endl;
    cout<<ans.empty()<<endl;
    return 0;
}
