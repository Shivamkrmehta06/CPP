/* //Print numbers from 1 to N using recursion.
//Print numbers from N to 1 using recursion.
#include <iostream>
using namespace std;

void printNumber(int n){
    //base case 
    if(n == 0)
        return;
    printNumber(n-1);
    cout<<n<<" ";
}

void printNumR(int n){
    //base case 
    if(n == 0)
        return;
    cout<<n<<" ";
    printNumR(n-1);
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    printNumber(n);
    cout<<endl;
    printNumR(n);
    return 0;
}
 

//Find sum of first N natural numbers using recursion.

#include <iostream>
using namespace std;

int sum(int n){
    if(n == 1)
        return 1;
    return n + sum(n-1);
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    int result = sum(3);
    cout<<"Sum: "<<result<<endl;
    return 0;
}


//Find Nth Fibonacci number using recursion.
#include <iostream>
using namespace std;

int fibonacci(int n){
    // base case
    if(n == 0)
        return 0;
    if(n == 1 )
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        int ans = fibonacci(i);
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
} */

//Reverse a string using recursion
//Example: "abcd" → "dcba"
/* #include <iostream>
using namespace std;

void rev(char s[],int size){
    // base case
    if(size == 0)
        return;
    cout<<s[size-1]<<" ";
    rev(s,size-1);
}

int main() {
    char arr[7] = "Ryan";
    rev(arr,6);
    return 0;
} 

// Verify whether array is sorted or not?
#include <iostream>
using namespace std;
bool verify(int *arr,int size){
    if(size == 0 || size == 1)
        return true;
    else if(arr[0]>arr[1])
        return false;
    else{
        bool ans = verify(arr+1,size-1);
        return ans;
    }
}
int main() {
    int arr[5] = {9,8,3,4,5};
    bool result = verify(arr,5);
    if(result) cout<<"Array is Sorted."<<endl;
    else cout<<"Array is not Sorted."<<endl;
    return 0;
}

//Find Sum using recursion
#include <iostream>
using namespace std;
int sum(int *arr,int size){
    int res = 0;
    if(size == 0)
        return 0;
    else if(size == 1)
        return arr[0];
    res = arr[0]+sum(arr+1,size-1);
    return res;
    
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int mires = sum(arr,5);
    cout<<"Sum: "<<mires<<endl;
    return 0;
}

//Linear Search using recursion
#include <iostream>
using namespace std;
bool linSearch(int *arr,int key,int size){
    if(size == 0)
        return false;
    if(arr[0] == key)
        return true;
    else{
        return linSearch(arr+1,key,size-1);
    }
    
}
int main() {
    int arr[5] = {1,2,3,4,5};
    bool ans = linSearch(arr,9,5);
    if(ans) cout<<"Element is Found."<<endl;
    else cout<<"Element is not Found."<<endl;
    return 0;
}

//Binary Search using recursion
#include <iostream>
using namespace std;
bool binarySearch(int *arr,int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key)
            return true;
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}
bool binarySearchR(int *arr,int start,int end,int key){
    int mid = start + (end-start)/2;
    if(start>end)
        return false;

    if(arr[mid] == key)
        return true;
    else if(key>arr[mid]){
        return binarySearchR(arr,mid+1,end,key);
    }
    else{
        return binarySearchR(arr,start,mid-1,key);
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    bool ans = binarySearchR(arr,0,5,3);
    if(ans) cout<<"Element found."<<endl;
    else cout<<"Element not found."<<endl;
    return 0;
}

//Linear Search using recursion
#include <iostream>
using namespace std;
bool linearSearch(int *arr,int size,int key){
    if(size == 0)
        return false;
    if(arr[0] == key)
        return true;
    else{
        return linearSearch(arr+1,size-1,key);
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    bool ans = linearSearch(arr,5,10);
    if(ans) cout<<"Element found."<<endl;
    else cout<<"Element not found."<<endl;
    return 0;
}

//Reverse a string
#include <iostream>
using namespace std;

void rev(char str[],int size){
    if(size == 0)
        return;
    cout<<str[size-1]<<" ";
    rev(str,size-1);
}

int main() {
    char s[] = "Shivam";
    rev(s,6);
    return 0;
}


//Say digit
#include <iostream>
using namespace std;

void sayDigit(int n,string arr[]){
    if(n == 0)
        return;
    int digit = n%10;
    n = n/10;
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
    
}

int main() {
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}

// abcde -> edcba
#include <iostream>
using namespace std;

void revS(string &s,int start,int end){
    if(start>end)
        return;
    swap(s[start],s[end]);
    start++;
    end--;
    revS(s,start,end);
}

int main() {
    string name = "Mehta";
    revS(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}

//pallindrome check for string
#include <iostream>
using namespace std;

bool verifyPalli(string s,int i,int j){
    if(i>j)
        return true;
    else if(s[i]!=s[j])
        return false;
    i++;
    j--;
    verifyPalli(s,i,j);
    return true;
}

string toUpper(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    return s;
}

string toLower(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

int main() {
    string s("mango");
    string y("AAKASH");
    bool ans = verifyPalli(s,0,s.size()-1);
    if(ans) cout<<"Valid Pallindrome."<<endl;
    else cout<<"Invalid, not a Pallindrome."<<endl;
    string v = toUpper(s);
    cout<<v<<endl;
    string x = toLower(y);
    cout<<x<<endl;
    return 0;
}

//power of a^b

#include <iostream>
using namespace std;

int power(int a,int b){
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    int ans = power(a,b/2);
    if(b&1){
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
}

int main() {
    int n,p;
    cout<<"Enter Base: "<<endl;
    cin>>n;
    cout<<"Enter Power: "<<endl;
    cin>>p;
    int res = power(n,p);
    cout<<"Answer: "<<res<<endl;
    return 0;
}

//bubble sort
#include <iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void bubbleSortR(int *arr,int size){
    if(size == 0)
        return;
    for(int i = 0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSortR(arr,size-1);
}

int main() {
    int arr[5] = {4,2,5,1,3};
    bubbleSortR(arr,5);
    for(int i = 0;i<5;i++) cout<<i[arr]<<" ";
}


// Selection Sort - Smallest element ko utha ke pehli position pr rkh de
#include <iostream>
using namespace std;

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
    //base case
    if(start>=size)
        return;
    int minIndex = start;
    for(int i = start+1;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    if(start!=minIndex){
        swap(arr[start],arr[minIndex]);
    }
    selectionSortR(arr,start+1,size);
}


int main() {
    int arr[5] = {4,1,5,2,3};
    selectionSortR(arr,0,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
*/










