#include <iostream>
using namespace std;

void recursiveSelectionSort(int *arr, int start, int size){
    // Base case
    if (start >= size - 1)
        return;

    // Find the index of the minimum element
    int minIndex = start;
    for (int i = start + 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the found minimum element with the current start
    swap(arr[start], arr[minIndex]);

    // Recur for the rest of the array
    recursiveSelectionSort(arr, start + 1, size);
}

int main() {
    int arr[5] = {3,9,1,7,4};
    recursiveSelectionSort(arr,0,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}