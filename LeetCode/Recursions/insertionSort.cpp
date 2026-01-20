#include <iostream>
using namespace std;
void insertionSort(int *arr,int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void insertionRSort(int *arr,int size){
    // base case
    if(size == 0 || size == 1){
        return;
    }
    insertionRSort(arr,size-1);
    int i = arr[size-1];
    int j = i - 2;
    for(;j>=0;j--){
        if(arr[i]<arr[j]){
            arr[j+1] = arr[j];
        }
        else{ 
            break;
        }
    }
    arr[j+1] = i;
}

int main() {
    int arr[5] = {7,3,1,9,4};
    insertionRSort(arr,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
