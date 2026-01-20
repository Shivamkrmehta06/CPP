#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i - 1;
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
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[5] = {9,7,5,3,1};
    insertionSort(arr,5);
    return 0;
}
