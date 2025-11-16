/* #include <iostream>
using namespace std;

string toUpperCase(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>= 'a' && s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    return s;
}

string toLowerCase(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"UpperCase: "<<toUpperCase(s)<<endl;
    cout<<"LowerCase: "<<toLowerCase(s)<<endl;
    cout<<s<<endl;
    return 0;
} */

/* 
String Compression
i/p - {a,a,b,b,b,c,c,c}
o/p - {a,2,b,3,c,3}
*/
/* 
#include <iostream>
using namespace std;

int compress(vector<char> &chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int len = compress(chars);

    cout<<len<<endl;
    return 0;
} */

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

//Binary Search
/* 
#include <iostream>
using namespace std;

int binarySearch(int *arr,int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(key == arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){ 
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int key;
    cout<<"Enter Key: "<<endl;
    cin>>key;
    int index = binarySearch(arr,5,key);
    cout<<"Element "<<key<<" is found at index "<<index<<endl;
    return 0;
} */

/* #include <iostream>
using namespace std;

bool linearSearch(int *arr,int n,int key){
    //base case
    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        int remainingPart = linearSearch(arr+1,n-1,key);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {1,3,6,9,4};
    bool ans = linearSearch(arr,5,9);
    if(ans) cout<<"Element is Found"<<endl;
    else cout<<"Element is not Found"<<endl;
    return 0;
} */

// Binary Search
/* #include <iostream>
using namespace std;
int binarySearch(int *arr,int start,int end,int key){
    int mid = start + (end-start)/2;
    // base case
    if(start>end)
        return 0;
    if(arr[mid] == key){
        return mid;
    }
    if(key>arr[mid]){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}

int main() {
    int arr[5] = {1,3,5,7,9};
    int ans = binarySearch(arr,0,5,9);
    cout<<"Element is at index: "<<ans<<endl;
    return 0;
} */

//Bubble Sort
/* #include <iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1};
    int n = 1;

    bubbleSort(arr,n);
    return 0;
} */

//Bubble Sort using Recursion
/* #include <iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    //base case
    if(size == 0 || size == 1){
        return ;
    }
    // solving 1st case
    for(int i = 0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size - 1);
}

int main() {
    int arr[5] = {7,3,1,9,2};
    return 0;
} */

// Selection Sort - Sabse phle jo choti value hai usko starting index pr rkhna hai
/* #include <iostream>
using namespace std;

void selectionSort(int *arr,int size){
    for(int i = 0;i<size;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main() {
    int arr[5] = {3,1,9,2,4};
    selectionSort(arr,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
} */
/* 
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
 */

//Insertion Sort 
/* #include <iostream>
using namespace std;

void insertionSort(int *arr,int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i - 1;
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
int main(){
    int arr[5] = {5,4,3,2,1};
    insertionSort(arr,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
} */

/* // Bubble Sort
#include <iostream>
using namespace std;
void bubbleSort(int *arr,int size){
    for(int i = 0;i<size-1;i++){
        for(int j = 0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubbleRSort(int *arr,int size){
    //base case
    if(size == 0 || size == 1){
        return;
    }
    for(int i = 0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleRSort(arr,size-1);
}
int main() {
    int arr[5] = {5,4,3,2,1};
    bubbleRSort(arr,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
} */
/* 
//Selection Sort
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
    int minIndex = start;
    // base case
    if(start >= size - 1)
        return;
    for(int i = start + 1;i<size;i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    swap(arr[start],arr[minIndex]);
    selectionRSort(arr,size,start+1);
}
int main() {
    int arr[5] = {5,4,3,2,1};
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
    selectionRSort(arr,5,0);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
} */

// Insertion Sort

#include <iostream>
using namespace std;

void insertionSort(int *arr,int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i - 1;
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

void insertionRSort(int *arr,int size){
    if(size == 0 || size == 1)
        return;
    insertionRSort(arr,size-1);
    int temp = arr[size - 1];
    int j = size - 2;
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

int main() {
    int arr[5] = {5,4,3,2,1};
    insertionRSort(arr,5);
    for(int i = 0;i<5;i++) cout<<arr[i]<<" ";
    return 0;
}
