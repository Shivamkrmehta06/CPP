#include <iostream>
using namespace std;
vector<bool> prefixesDivBy5(vector<int>& nums) {
    vector<bool> ans;
    int rem = 0;
    for(int i = 0;i<nums.size();i++){
        rem = (rem*2+nums[i])%5;
        if(rem == 0){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
    }
    return ans;
}
int main() {
    vector<int> a = {1,0,1};
    vector<bool> res = prefixesDivBy5(a);
    for(auto x:res) cout<<x<<" ";
    return 0;
}