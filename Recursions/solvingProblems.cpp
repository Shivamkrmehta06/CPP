// Check perfect number
/*  #include <iostream>
 using namespace std;
 
 void verifyPerfect(int n){
    vector<int> ans;
    int sum = 1;
    cout<<"Square Root: "<<sqrt(n)<<endl;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            if(i == n/i){
                sum += i;}
            else {
                sum += i + n/i;
        }
    }
    }
    cout<<"Result: "<<sum<<endl;
    if(sum == n) cout<<"It's Perfect number"<<endl;
    else cout<<"It's not a Perfect number"<<endl;
 }

 int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    verifyPerfect(n);
    return 0;
 } */
 
 // Say Words

/*  #include <iostream>
 using namespace std;
 
 void sayWords(string arr[],int n){
    if(n == 0)
        return;
    int digit = n%10;
    n = n/10;
    sayWords(arr,n);
    cout<<arr[digit]<<" ";
 }

 int main() {
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    sayWords(arr,n);
    return 0;
 } */
 
 // Sum of array using Recursion

 /* #include <iostream>
 using namespace std;
 
int arraySum(int *arr,int size){
    int sum = 0;
    if(size == 0){
        return 0;
    }
    if(size == 1)
        return arr[size];
    else{
        sum += *arr;
        arraySum(arr++,size-1);
    }
    return sum;
}

 int main() {
    int arr[5] = {1,2,3,4,5};
    cout<<"Sum: "<<arraySum(arr,5)<<endl;
    return 0;
 } */

/* 
i/p - {2,4,6,9,11,13}
o/p -check if it is sorted or not?
*/

/* #include <iostream>
using namespace std;

void print(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool verifySorting(int *arr,int n){
    print(arr,n);
    //base case
    if(n == 0 || n == 1)
        return true;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingPart = verifySorting(arr+1,n - 1);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {1,3,5,17,9};
    bool ans = verifySorting(arr,5);
    if(ans) cout<<"Array is Sorted"<<endl;
    else cout<<"Array is not Sorted"<<endl;
    return 0;
} */

// Linear Search using Recursion

/* #include <iostream>
using namespace std;

bool linearSearch(int *arr,int size,int key){
    // base case
    if(size == 0)
        return false;
    if(arr[0] == key){
        return true;
    }
    else{
        int remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {4,6,8,2,7};
    int key = 7;
    bool ans = linearSearch(arr,5,key);
    if(ans) cout<<"Element is Found"<<endl;
    else cout<<"Element is not Found"<<endl;
    return 0;
}
 */

/* 
i/p - "a b c d e"
o/p - "e d c b a"
*/
/* #include <iostream>
using namespace std;
string reverseStr(string s,int start,int end){
    //base case
    if(start >= end)
        return s;
    else{
        swap(s[start],s[end]);
    }
    return reverseStr(s,start+1,end-1);
}

string reverseString(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start<=end){
        swap(s[start++],s[end--]);
    }
    return s;
}

int main() {
    string s("abcde");
    string res = reverseStr(s,0,4);
    cout<<res<<endl;
    return 0;
}*/

// Reverse String using Recursion

/* #include <iostream>
using namespace std;
bool reverseStr(string s,int start,int end){
    //base case
    if(start>end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return reverseStr(s,start+1,end-1);
}
int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    int start = 0;
    int end = s.size()-1;
    bool ans = reverseStr(s,start,end);
    if(ans) cout<<"It is Pallindrome"<<endl;
    else cout<<"It is not a Pallindrome"<<endl;
    return 0;
} */

/* #include <iostream>
using namespace std;

int baseExpo(long int a,long int b){
    //base case
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    //recursive call
    long int ans = baseExpo(a,b/2);
    //if a is odd
    if(b&1){
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
}

int main() {
    long int a,b;
    cout<<"Enter Base: "<<endl;
    cin>>a;
    cout<<"Enter Exponent: "<<endl;
    cin>>b;
    cout<<"Answer: "<<baseExpo(a,b)<<endl;
    return 0;
} */

// selection sort

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
void selectionRSort(int *arr,int size,int start){
    //base case
    if(start>=size){
        return;
    }
    int minIndex = start;
    for(int i = start+1;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    swap(arr[start],arr[minIndex]);
    selectionRSort(arr,size,start+1);
}

int main() {
    int arr[] = {5,4,3,2,1};
    selectionRSort(arr,5,0);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}




 
