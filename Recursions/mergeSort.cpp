// Merge Sort

#include <iostream>
using namespace std;

void merge(int *arr,int start,int end){
    int mid = start + (end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = start;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index = 0;
    int index2 = 0;
    mainArrayIndex = start;
    while(index < len1 && index2 < len2){
        if(first[index] < second[index2]){
            arr[mainArrayIndex++] = first[index++]; 
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index < len1){
        arr[mainArrayIndex++] = first[index++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete [] first;
    delete [] second;

}

void mergeSort(int *arr,int start,int end){
    //base case
    if(start >= end){
        return;
    }
    int mid = start + (end - start)/2;

    //left part sort krna
    mergeSort(arr,start,mid);

    //right part sort krna
    mergeSort(arr,mid+1,end);

    //merge
    merge(arr,start,end);
}

void print(int *arr,int size){
    for(int i = 0;i<size;i++){
        cout<<i[arr]<<" ";
    }
}

int main() {
    int arr[] = {9, 4, 7, 6, 3, 1, 5, 2};
    mergeSort(arr,0,7);
    print(arr,7);
    return 0;
}
