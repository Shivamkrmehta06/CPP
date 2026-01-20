#include <iostream>
using namespace std;

vector<int> merge(vector<int> &nums1,vector<int> &nums2){
        int s1 = nums1.size();
        int s2 = nums2.size();
        vector<int> ans;
        int i = 0, j = 0,k = 0;
        while(i<s1 && j<s2){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i++]);
            }
            else{
                ans.push_back(nums2[j++]);
            }
        }
        while(i<s1){
            ans.push_back(nums1[i++]);
        }
        while(j<s2){
            ans.push_back(nums2[j++]);
        }
        return ans;
    }

int oddEven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}

double median(vector<int> arr){
    int vSize = arr.size();
    double median = 0;
    if(vSize%2 == 0){
        median = (arr[vSize/2-1] + arr[vSize/2])/2;
        return median;
    }
    else{
        median = arr[vSize/2];
        return median;
    }
}

int main() {
    vector<int> nums = {1,2};
    vector<int> nums2 = {3,4};
    vector<int> ans = merge(nums,nums2);
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;

    int a = 1200;
    if(oddEven(a)) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    double res = median(ans);
    cout<<"Median: "<<res<<endl;
    return 0;
}
