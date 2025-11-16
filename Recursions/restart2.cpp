/* //Insertion Sort
#include <iostream>
using namespace std;

void bubbleSortR(int *arr,int size){
    if(size == 0)
        return;
    for(int i = 0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSortR(arr,size-1);
}

void selectionSort(int *arr,int size){
    for(int i = 0;i<size;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void selectionSortR(int *arr,int start,int size){
    if(start>=size)
        return;
    int minIndex = start;
    for(int i = start+1;i<size;i++){
        if(arr[start]>arr[i]){
            minIndex = i;
        }
    }
    if(minIndex!=start){
        swap(arr[start],arr[minIndex]);
    }
    selectionSortR(arr,start+1,size);
}
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

void insertionRSort(int arr[], int n) {
    if (n <= 1) return;

    // pehle n-1 elements sort kar lo
    insertionRSort(arr, n - 1);

    int key = arr[n - 1];

    // yaha for loop use karte hain instead of while
    int j;
    for (j = n - 2; j >= 0 && arr[j] > key; j--) {
        arr[j + 1] = arr[j];
    }

    arr[j + 1] = key;
}

void print(int *arr,int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[5] = {3 ,2, 5, 1, 4};
    insertionRSort(arr,5);
    print(arr,5);
    return 0;
} 

//Merge two sorted arrays
#include <iostream>
using namespace std;

void print(int *arr,int size){
    for(int i = 0;i<size;i++) cout<<i[arr]<<" ";
}

void merge(int *arr,int m,int *arr2,int n){
    int i = 0;
    int j = 0;
    int k = 0;
    int x = m+n;
    int *arr3 = new int[x];
    while(i<m && j<n){
        if(arr[i]<arr2[j]){
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
    print(arr3,x);
    delete[] arr3;
}

int main() {
    int arr[5] = {2,4,6,8,10};
    int arr2[3] = {1,3,5};
    merge(arr,5,arr2,3);
    return 0;
} 

// break a array
#include <iostream>
using namespace std;

void print(int *arr,int size){
    for(int i = 0;i<size;i++) cout<<i[arr]<<" ";
    cout<<endl;
}

void breakArray(int *arr,int start,int end){
    int mid = start+(end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int mainArrayIndex = start;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int j = 0;j<len2;j++){
        second[j] = arr[mainArrayIndex++];
    }
    print(first,len1);
    print(second,len2);
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    breakArray(arr,0,5);
    return 0;
}

//Merge Sort
#include <iostream>
using namespace std;

void merge(int *arr,int start,int end){
    int mid = start+(end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;
    //copy values
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int j = 0;j<len2;j++){
        second[j] = arr[mainArrayIndex++];
    }

    //merge the arrays
    int i = 0;
    int j = 0;
    mainArrayIndex = start;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mainArrayIndex++] = first[i++];
        }
        else{
            arr[mainArrayIndex++] = second[j++];
        }
    }

    while(i<len1){
        arr[mainArrayIndex++] = first[i++];
    }

    while(j<len2){
        arr[mainArrayIndex++] = second[j++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr,int start,int end){
    int mid = start + (end-start)/2;
    if(start>=end)
        return;
    
    //left part sort krna
    mergeSort(arr,start,mid);

    //right part sort krna
    mergeSort(arr,mid+1,end);

    //merge krna
    merge(arr,start,end);
}

int main() {
    int arr[5] = {5,3,1,2,4};
    mergeSort(arr,0,4);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}


//Revision
#include <iostream>
using namespace std;
void bubbleSortR(int *arr,int size){
    if(size == 0)
        return;
    for(int i = 0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSortR(arr,size-1);
}

void selectionSort(int *arr,int size){
    for(int i = 0;i<size;i++){
        int minIndex = i;
        for(int j = i+1;j<size-1;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void selectionSortR(int *arr,int start,int size){
    if(start>=size)
        return;
    int minIndex = start;
    for(int i = start+1;i<size;i++){
        if(arr[minIndex]>arr[i]){
            minIndex = i;
        }
    }
    if(start!=minIndex){
        swap(arr[start],arr[minIndex]);
    }
    selectionSortR(arr,start+1,size);
}

void insertionSort(int *arr,int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        for( ;j>=0;j--){
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

int main() {
    int arr[5] = {5,3,1,2,4};
    insertionSort(arr,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
*/

