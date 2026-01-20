/* // Merge two sorted arrays
#include <iostream>
using namespace std;

void mergeSA(int *arr,int n,int *arr1,int m,int *arr2){
    int i = 0,j = 0,k = 0;
    while(i<n && j<m){
        if(arr[i]<arr1[j]){
            arr2[k++] = arr[i++];
        }
        else{
            arr2[k++] = arr1[j++];
        }
    }
    while(i<n){
        arr2[k++] = arr[i++];
    }
    while(j<m){
        arr2[k++] = arr1[j++];
    }
}

int main() {
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};
    int arr3[8] = {0};
    mergeSA(arr1 , 5 , arr2 , 3 , arr3);
    for(int i = 0;i<8;i++) cout<<arr3[i]<<" ";
    return 0;
} */
/* #include<iostream>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1.begin(),nums1.begin() + m);
        int i = 0, j = 0, k = 0;
        while(i<m && j<n){
            if(temp[i]<=nums2[j]){
                nums1[k++] = temp[i++];
                //break;
            }
            else{
                nums1[k++] = nums2[j++];
            }
        }
        while(i<m){
            nums1[k++] = temp[i++];
        }
        while(j<n){
            nums1[k++] = nums2[j++];
        }
    }
int main(){
    vector<int> arr1 = {4,5,6,0,0,0};
    vector<int> arr2 = {1,2,3};
    merge(arr1,3,arr2,3);
    for(auto x:arr1){
        cout<<x<<" ";
    }
} */

//remove elements
/* 
#include <iostream>
using namespace std;
int removeElement(int *arr,int n,int val){
    int k = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] != val){
            arr[k++] = arr[i];
        }
    }
    return k;
}

void twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            int sum = nums[start]+nums[end];
            if(sum == target){
                cout<<sum<<end;
                return;
            }
            else if(sum<target){
                start++;
            }
            else{
                end--;
            }
        }
        cout<<"No Pair Found"<<endl;
    }

void insertionSort(vector<int> arr,int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i - 1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
        }
        arr[j+1] = temp;
    }
}

int main() {
    vector<int> arr = {2,7,5,11};
    insertionSort(arr,4);
    twoSum(arr,18);
    return 0;
} */

// Merge Sorted arrays

/* #include <iostream>
using namespace std;

void merge(int *arr1,int m,int *arr2,int n,int *arr3){
    int i = 0,j = 0,k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<m){
        arr3[k++] = arr1[i++];
    }
    while(j<n){
        arr3[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};
    int arr3[8];
    merge(arr1,5,arr2,3,arr3);
    for(int i = 0;i<8;i++) cout<<arr3[i]<<" ";
    return 0;
} */
/* 
#include <iostream>
using namespace std;

void merge(int *arr,int start,int end){
    int mid = start + (end - start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //creating 2 arrays
    int *first = new int[len1];
    int *second = new int[len2];

    //copying value in first
    int mainArrayIndex = start;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    //copying value in second
    mainArrayIndex = mid + 1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays
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
    delete [] first;
    delete [] second;
}

void mergeSort(int *arr,int start, int end){
    //base case
    if(start>=end){
        return;
    }
    int mid = start + (end - start)/2;
    //left wala part 
    mergeSort(arr,start,mid);

    //right wala part
    mergeSort(arr,mid+1,end);

    //merge
    merge(arr,start,end);

}

int main() {
    int arr[] = {5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    int i = 1;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<i<<" ";
            col++;
            i++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}

