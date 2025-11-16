/* #include <iostream>
using namespace std;

void status(int source,int destination){
    cout<<"Source:"<<source<<" and Destination:"<<destination<<endl;
    if(source == destination){
        cout<<"Reached to Destination!"<<endl;
        return;}
    status(source+1,destination);
}

int main() {
    int m = 0;
    int n;
    cout<<"Source is Initialized to 0! "<<endl;
    cout<<"Enter destination: "<<endl;
    cin>>n;
    status(m,n);
    return 0;
}
 

#include <iostream>
using namespace std;
 
int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void fibonacciLoop(int n){
    int first = 0;
    int second = 1;
     cout<<first<<" ";
     cout<<second<<" ";
    for(int i = 2;i<n;i++){
        int third = first + second;
        cout<<third<<" ";
        first = second;
        second = third;
    }
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
     for (int i = 0; i < n; i++)
    {
        cout<<fibonacci(i)<<" ";
    } 
    
    cout<<endl;
    fibonacciLoop(n);
    
    return 0;
 } 

// Check an array is sorted or not
#include <iostream>
using namespace std;

bool verifySorting(int *arr,int size,int start){
    if(start>=size-1)
        return true;
    if(arr[start]>arr[start+1]){
        return false;
    }
    return verifySorting(arr,size,start+1);
}

int main() {
    int arr[5] = {1,2,3,4,5};
    bool ans = verifySorting(arr,5,0);
    if(ans) cout<<"Array is Sorted"<<endl;
    else cout<<"Array is not Sorted"<<endl;
    return 0;
} 

// Sum of elements of an Array
#include <iostream>
using namespace std;

int arraySum(int *arr,int size){
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    int sum = 0;
    sum = arr[0] + arraySum(arr+1,size-1);
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int res = arraySum(arr,5);
    cout<<"Sum: "<<res<<endl;
    return 0;
}*/


//Bubble Sort 
#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main() {
    int arr[5] = {3,5,2,1,4};
    bubbleSort(arr,5);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}



 