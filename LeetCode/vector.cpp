//Take 5 integers as input from the user and print their sum.

/* #include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int sum = 0;
    for(int i = 0;i<5;i++){
        cout<<"Enter a Value: "<<endl;
        int temp;
        cin>>temp;
        sum = sum+temp;
        v.push_back(temp);
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"Sum of elements is: "<<sum<<endl;
    return 0;
} */

//Input an array of n integers and print the maximum number.

/* #include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    //Humne input leli is for loop se
    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter a Value: "<<endl;
        cin>>temp;
        v.push_back(temp);
    }
    //maximum number dekhna hai
    int maxi = -1;
    for(auto x:v){
        if (x>maxi){
            maxi = x;
        }
    }
    cout<<"Maximum Value: "<<maxi<<endl;
    return 0;
} */

//Count how many numbers in the array are even and how many are odd.

/* #include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    //we got input from here
    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter a Value: "<<endl;
        cin>>temp;
        v.push_back(temp);
    }
    int evenCount = 0;
    int oddCount = 0;
    for(auto x:v){
        if(x%2==0){
            evenCount++;
        }
        else {
            oddCount++;
        }
    }
    cout<<"Number of Odd elements is "<<oddCount<<" and number of even elements is "<<evenCount<<endl;
    return 0;
} */

//Reverse a String

/* #include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a Word: "<<endl;
    cin>>s;
    cout<<endl;
    cout<<"String: "<<s<<endl;
    int start = 0;
    int end = s.size()-1;
    while(start<end){
        char temp;
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    cout<<endl;
    cout<<"Reversed String: "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Reversing using Algorithm: "<<s<<endl;
    return 0;
} */

//Check if a vector is a palindrome (same forward and backward).
/* #include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter number of elements in Vector: "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter a Value: "<<endl;
        cin>>temp;
        v.push_back(temp);
    }
    bool isPallindrome = true;
    int start = 0;
    int end = v.size()-1;
    while(start<end){
        if(v[start]!=v[end]){
            isPallindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(isPallindrome)cout<<"Vector is Pallindrome."<<endl;
    else cout<<"Vector is not Pallindrome."<<endl;
    return 0;
} */

//Find the second largest element in a vector.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter number of elements in Vector: "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter a Value: "<<endl;
        cin>>temp;
        v.push_back(temp);
    }
    int maxi = -1;
    for(auto x:v){
        if(x>maxi){
            maxi = x;
        }
    }
    cout<<"Maximum Value: "<<maxi<<endl;
    return 0;
}