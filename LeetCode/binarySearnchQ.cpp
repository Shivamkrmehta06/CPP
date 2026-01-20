/* 
Find first and last occurence of an element in a sorted array.


#include <iostream>
using namespace std;

int firstOccu(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else  if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccu(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else  if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    int arr[5] = {1,2,2,2,2};
    int a = firstOccu(arr,5,2);
    int b = lastOccu(arr,5,2);
    cout<<"First Index of Element is: "<<a<<endl<<"Last Index of Element is "<<b<<endl;
    return 0;
} */


/* 
Find the total number of occurences of an element in an array.
Formula: (Starting Index - Last Index) + 1


#include <iostream>
using namespace std;

int firstOccu(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else  if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccu(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else  if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

void totalOccu(int arr[],int size,int key){
    int last = lastOccu(arr,size,key);
    int first = firstOccu(arr,size,key);
    int total = (last - first) + 1;
    cout<<"Total Occurence: "<<total<<endl;
}

int main() {
    int arr[5] = {1,2,2,2,2};
    totalOccu(arr,5,2);
    return 0;
}
*/

/* 
Find the Peak element of a Mountain Array.
*/

#include <iostream>
using namespace std;

int peakElement(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else if(arr[mid]>arr[mid+1]){
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return arr[end];
}

int main() {
    int arr[4] = {1,3,5,2};
    int a = peakElement(arr,4);
    cout<<"Peak Element: "<<a<<endl;
    return 0;
}
