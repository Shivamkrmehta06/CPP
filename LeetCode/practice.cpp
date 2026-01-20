/* #include <iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for(int i = 0;i<size;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
            swap(arr[minIndex],arr[i]);
        }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[5] = {7,5,2,3,1};
    selectionSort(arr,5);
    return 0;
}
 */

 // Reverse the words
 /* 
 i//p - My name is Shivam
 o/p - yM eman si mavihS
 */

/* #include <iostream>
using namespace std;

string reverseWord(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start<=end){
        swap(s[start++],s[end--]);
    }
    return s;
}

string strReverse(string s){
    string temp;
    string result;
    for(int i = 0;i<s.size();i++){
        if((s[i] == ' ' )|| (i == s.size()-1)){
            result += reverseWord(temp);
            result += ' ';
            temp = "";
        }
        else{
            temp += s[i];
        }
        
    }
    return result;
}

int main() {
    string s;
    cout<<"Enter a String: "<<endl;
    getline(cin,s);
    cout<<"Reversed Words: "<<endl;
    string res = strReverse(s);
    cout<<res<<endl;
    return 0;
} */

// Removing Spaces, Special Characters and Numbers from string.

/* #include <iostream>
using namespace std;

string removeSpchar(string s){
    int i = 0;
    string p;
    while(i<s.size()){
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
            p += s[i];
        }
        i++;
    }
    cout<<p<<endl;
    return p;
}

string toLowerCase(string s){
    int i = 0;
    string p;
    while(i<s.size()){
        if(s[i]>='A'&&s[i]<='Z'){
            p += s[i] - 'A' + 'a';
        }
        else{
            p += s[i];
        }
        i++;
    }
    return p;
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);  
    cout<<"After Removing Space: "<<removeSpchar(s)<<endl; 
    cout<<"Lowercase: "<<toLowerCase(s)<<endl; 
    return 0;
} */

// Remove occurences of given string
/* #include <iostream>
using namespace std;

string removeOccu(string s, string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main() {
    string s;
    string part;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Enter Part: "<<endl;
    getline(cin,part);
    cout<<removeOccu(s,part)<<endl;
    return 0;
}
 */

// Return a maximum occurring character
/* 
#include <iostream>
using namespace std;

char maxOccuchar(string s){
    int arr[26] = {0};
    int number = 0;
    for(int i = 0;i<s.size();i++){
        int ch = s[i];
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i = 0;i<26;i++){
        if(arr[i]>maxi){
            ans = i;
            maxi = arr[i];
        }
    }
    char ret = ans + 'a';
    return ret; 
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);   
    cout<<"Maximum Occurring character: "<<maxOccuchar(s)<<endl;
    return 0;
} */

/* #include <iostream>
using namespace std;

string reverseWord(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start<=end){
        swap(s[start++],s[end--]);
    }
    return s;
}

string reverseString(string s){
    string temp;
    string result;
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' '){
            result += reverseWord(temp);
            result += ' ';
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    if(!temp.empty()){
        result += reverseWord(temp);
    }
    return result;
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Reverse String: "<<reverseString(s)<<endl;
    return 0;
} */

/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Size of Array: "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter a Character: "<<endl;
    // taking input
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    while(i<n){
        cout<<*(arr+i)<<endl;
        i++;
    }
    return 0;
}
*/

// Permutations in a string

#include <iostream>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i = 0;i<26;i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1,string s2){
    int count[26] = {0};
    for(int i = 0;i<s1.size();i++){
        int index = s1[i] - 'a';
        count[index]++;
    }
    int count2[26] = {0};
    int windowSize = s1.length();
    int i = 0;
    while(i<windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++; 
        i++;       
    }
    if(checkEqual(count,count2)){
        return 1;
    }

    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[oldChar - 'a']--;
        i++;
        if(checkEqual(count,count2)){
            return 1;
        }
    }
    return 0;
}

int main() {
    string s,s2;
    cout<<"Enter Part: "<<endl;
    cin>>s;
    cout<<"Enter String: "<<endl;
    cin>>s2;
    cout<<"Permutation: "<<checkInclusion(s,s2)<<endl;
    return 0;
}


