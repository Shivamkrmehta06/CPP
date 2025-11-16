#include <iostream>
using namespace std;

void merge(int *arr,int m,int *arr2,int n,int *arr3){

    int i = 0;
    int j = 0;
    int k = 0;
    while(i<m && j<n){
        if(arr2[j]>arr[i]){
            arr3[k++] = arr[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<m){
        arr3[k++] = arr[i++];
    }

    while(j<n){
        arr3[k++] = arr2[j++];
    }
}

int main() {
    int arr[5] = {1,3,5,7,9};
    int arr2[4] = {2,4,6,8};
    int arr3[9] = {0};
    merge(arr,5,arr2,4,arr3);
    for(int i =0;i<9;i++) cout<<arr3[i]<<" ";
    return 0;
}
