//Two Sum Problem
// nums = [2, 7, 11, 15]
// target = 9

#include<iostream>
#include<vector>
#include<map>
using namespace std;

void bubbleSort(vector<int> &s){
    for(int i = 0;i<s.size();i++){
        for(int j = i+1;j<s.size();j++){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    }
}

/*vector<int> twoSum(vector<int> &arr,int target){
    map<int,int> m;
    vector<int> arr = {1,2,3,4,5};
    vector<int> v;
    int target = 9;
    for(int i = 0;i<arr.size();i++){
        int need = target - arr[i];
        if(m.find(need) != m.end()){
            v.push_back(m[need]);
            v.push_back(i);
        }
        m[arr[i]] = i;
    }
    for(auto x:v) cout<<x<<" ";
}*/

void threeSum(vector<int> arr){
    vector<int> a;
    bubbleSort(arr);
    //for(auto x:arr) cout<<x<<" ";
    for(int i = 0;i<arr.size()-2;i++){
        int sum,left,right;
        left = i+1;
        right = arr.size()-1;
        if(i > 0 && arr[i] == arr[i-1])
            continue;
        while(left<right){
            sum = arr[i] + arr[left]+arr[right];
            if(sum == 0){
                a.push_back(arr[i]);
                a.push_back(arr[left]);
                a.push_back(arr[right]);
                while(left < right && arr[left] == arr[left+1])
                    left++;

                while(left < right && arr[right] == arr[right-1])
                    right--;
                left++;
                right--;
            }
            else if(sum>0){
                right--;
            }
            else if(sum<0){
                left++;
            }
    }
}
    for(auto x:a) cout<<x<<" ";
}

int main(){
    vector<int> arr = {-4,-1,-1,0,1,2};

    threeSum(arr);
    return 0;
}