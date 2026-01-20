// Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.


#include <iostream>
using namespace std;

void merge(vector<int> &nums,int start,int end){
    int mid = start+(end-start)/2;
    int len1 = mid-start+1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int maI = start;
    //copy kro left wale part ki values
    for(int i = 0;i<len1;i++){
        first[i] = nums[maI++];
    }
    //copy kro right wale part ki values
    for(int j = 0;j<len2;j++){
        second[j] = nums[maI++];
    }
    int in1 = 0;
    int in2 = 0;
    maI = start;
    while(in1<len1 && in2<len2){
        if(first[in1]<second[in2]){
            nums[maI++] = first[in1++];
        }
        else{
            nums[maI++] = second[in2++];
        }
    }
    while(in1<len1){
        nums[maI++] = first[in1++];
    }
    while(in2<len2){
        nums[maI++] = second[in2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(vector<int> &m,int start,int end){
    int mid = start+(end-start)/2;
    if(start>=end){
        return;
    }
    //left wala part sort kro
    mergeSort(m,start,mid);
    //right wala part sort kro
    mergeSort(m,mid+1,end);
    //merge kr do
    merge(m,start,end);
}

void maximumGap(vector<int> &nums){
    if(nums.size()<2)
        return;
    vector<int> gap;
    int diff = 0;
    for(int i = 0;i<nums.size();i++){
        if(i+1<nums.size()){
            diff = nums[i+1]-nums[i];
            gap.push_back(diff);
        }
    }
    for(auto x:gap) cout<<x<<" ";
    cout<<endl;
    int max = INT_MIN;
    for(int i = 0;i<gap.size();i++){
        if(gap[i]>max){
            max = gap[i];
        }
    }
    cout<<max<<endl;
}

int main() {
    vector<int> a = {10};
    mergeSort(a,0,a.size()-1);
    for(auto x:a) cout<<x<<" ";
    cout<<endl;
    maximumGap(a);
    return 0;
}