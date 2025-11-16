#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    bool swapped = false;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
            if (swapped == false){
                break;
            }
        }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[5] = {9,5,3,2,1};
    bubbleSort(arr,5);
    return 0;
}
