#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int start = 0;
        int end = numbers.size()-1;
        int sum = 0;
        while(start<end){
            sum  = numbers[start]+numbers[end];
            if(sum == target){
                ans.push_back(start);
                ans.push_back(end);
                break;
            }
            else if(sum<target){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }

int main() {
    vector<int> arr = {2,7,11,15};
    vector<int> ans = twoSum(arr,9);
    for(auto x:ans) cout<<x<<" ";
    return 0;
}
