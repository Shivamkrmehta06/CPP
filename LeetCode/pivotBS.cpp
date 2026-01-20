/* 
Find Pivot in a Rotated and Sorted Array.
i/p - {7,9,1,2,3}
o/p - Pivot is at Index: 2


#include <iostream>
using namespace std;

int pivotElement(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main() {
    int arr[6] = {9,11,1, 3, 5, 7};
    int a = pivotElement(arr,6);
    cout<<"Pivot Element is at index: "<<a<<endl;
    return 0;
} */

/* 
Search in a Rotated and Sorted array.
i/p: {7,9,1,2,3}
o/p: key- 2, Index- 3
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int key){
    int s = start;
    int e = end;
    int mid = s + (e - s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}

int pivotElement(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int searchRotated(int arr[],int size,int key){
    int pivot = pivotElement(arr,size);
    int end = size - 1;
    if(arr[pivot]<=key && key<=arr[end]){
        return binarySearch(arr,pivot,end,key);
    }
    else{
        return binarySearch(arr,0,pivot-1,key);
    }
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int a = searchRotated(arr,5,3);
    cout<<"Element is at index: "<<a<<endl;
    return 0;
}

