// Binary Search using Recursion
#include <iostream>
using namespace std;

bool binarySearch(int *arr,int start,int end,int key){
    int mid = start + (end - start)/2;
    //base case
    if(start>end)
        return false;
    if(arr[mid] == key)
        return true;
    if(key>arr[mid]){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,end - 1,key);
    }
}

int main() {
    int arr[5] = {2,4,6,7,9};
    bool ans = binarySearch(arr,0,5,10);
    if(ans) cout<<"Element is Found"<<endl;
    else cout<<"Element is not Found"<<endl;
    return 0;
}