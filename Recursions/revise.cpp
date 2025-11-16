/* //merge sort

#include <iostream>
using namespace std;

void merge(int *arr,int start,int end){
    int mid = start + (end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;
    //copying values into first and second array
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for(int j = 0;j<len2;j++){
        second[j] = arr[mainArrayIndex++];
    }

    //merging two arrays
    int index = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index<len1 && index2<len2){
        if(first[index]<second[index2]){
            arr[mainArrayIndex++] = first[index++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++]; 
        }
    }

    while(index<len1){
        arr[mainArrayIndex++] = first[index++];
    }

    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
 }

void mergeSort(int *arr,int start,int end){
    int mid = start + (end-start)/2;
    if(start>=end)
        return;
    
    //left wala part solve krte hai
    mergeSort(arr,start,mid-1);

    //right wala part solve krte hai
    mergeSort(arr,mid+1,end);

    //merge kr dete hai
    merge(arr,start,end);
}

int main() {
    int arr[5] = {3,5,1,2,4};
    mergeSort(arr,0,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
 

//quick sort
#include <iostream>
using namespace std;

int partition(int *arr,int start,int end){
    int count = 0;
    int pivot = arr[start];
    for(int i = start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = count+start;
    swap(arr[pivotIndex],arr[start]);

    int i = start;
    int j = end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr,int start,int end){
    if(start>=end)
        return;
    
    int p = partition(arr,start,end);

    //left side ka solve krte hai
    quickSort(arr,start,p-1);

    //right side ka solve krte hai
    quickSort(arr,p+1,end);
}

int main() {
    int arr[5] = {3,5,1,2,4};
    quickSort(arr,0,4);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}*/

//Sum of Natural Numbers
#include <iostream>
using namespace std;
int sum(int n){
    if(n == 0)
        return 0;
    int suma = 0;
    suma = n+sum(n-1);
    return suma;
}

void fun2(int n)
{
  if(n == 0)
    return;

  fun2(n/2);
  printf("%d", n%2);
}
int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    fun2(n);
    return 0;
}

