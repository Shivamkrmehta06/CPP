#include <iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    //base case
    if(size == 0 || size == 1){
        return ;
    }
    // solving 1st case
    for(int i = 0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size - 1);
}

int main() {
    int arr[5] = {7,3,1,9,2};
    return 0;
}