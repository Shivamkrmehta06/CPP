#include <iostream>
#include<vector>
using namespace std;

void maxSumDivThree(vector<int>& nums) {
    int sum = 0;
    for(int i = 0;i<nums.size();i++){
        sum = sum+nums[i];
    }
    vector<int> mod1,mod2;
    for(int i = 0;i<nums.size();i++) {
        if(nums[i]%3 == 1){
            mod1.push_back(nums[i]);
        }
        if(nums[i]%3 == 2){
            mod2.push_back(nums[i]);
        }
    }
    sort(mod1.begin(),mod1.end());
    sort(mod2.begin(),mod2.end());
    int rem = sum%3;
    int opt1 = INT_MAX;
    int opt2 = INT_MAX;
    if(rem == 1){ //is case me mod1 se 1 and mod2 se 2 elements subtract kr skte
        // if(mod1.size()>=1){
        //     sum = sum - mod1[0];
        // }
        // if(mod2.size()>=2){
        //     sum = sum - (mod2[0]+mod2[1]);
        // }
        opt1 = mod1.size()>=1?mod1[0]:INT_MAX;
        opt2 = mod2.size()>=2?mod2[0]+mod2[1]:INT_MAX;
    }
    if(rem == 2){
        // if(mod2.size()>=1){
        //     sum = sum - mod2[0];
        // }
        // if(mod1.size()>=2){
        //     sum = sum - (mod1[0]+mod1[1]);
        // }
        opt1 = mod1.size()>=2?mod1[0]+mod1[1]:INT_MAX;
        opt2 = mod2.size()>=1?mod2[0]:INT_MAX;
    }
    int rmVal = opt1<opt2?opt1:opt2;
    int ans = sum - rmVal;
    cout<<ans<<endl;
}

int main() {
    vector<int> a = {3,6,5,1,8};
    maxSumDivThree(a);
    return 0;
}