/*Return a maximum occuring character in an input string
i/p - test
o/p - 2
*/

/* #include <iostream>
using namespace std;
string maxOccuring(string s){
    int arr[26] = {0};
    int number = 0;
    for(int i = 0;i<s.size();i++){
        char ch = s[i];
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    for(int i = 0;i<26;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Array: "<<maxOccuring(s)<<endl;
    return 0;
} */

/* 
You have given a string 'STR' of words, You need to replace all the spaces between words with '@40'.
i/p - I am Shivam
o/p - I@40am@40Shivam
*/

/* #include <iostream>
using namespace std;

string update(string s){
    int i = 0;
    string p;
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' '){
            p += "@40";
        }
        else{
            p += s[i];
        }
   }
   return p;
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Updated String: "<<update(s)<<endl;
    return 0;
} */

/* 
Remove all occurences of substring
Given two strings are s and part. Perform the following operation on s until all occurences of the substring part are removed.
*/

/* #include <iostream>
using namespace std;

string removeOccurences(string s, string part){
    while(s.length()> 0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main() {
    string s;
    string p;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Enter the part to be removed: "<<endl;
    cin>>p;
    cout<<"Update: "<<removeOccurences(s,p)<<endl;
    return 0;
} */

/* 
Permutation in a String 
i/p - s1 = 'ab',s2 = 'eidbaoo'
o/p - true
*/

/* #include <iostream>
using namespace std;

bool checkEqual(int a[26],int b[26]){
    for(int i = 0;i<26;i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1,string s2){
    //character count array
    int count[26] = {0};
    for(int i = 0;i<s1.length();i++){
        int index = s1[i] - 'a';
        count[index]++;
    }
    
    // traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // running of first winodw
    while(i<windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count,count2)){
        return 1;
    }

    // aage window process karo
    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if(checkEqual(count,count2)){
            return 1;
        }
    }
    return 0;
}

int main() {
    string s;
    string s2;
    cout<<"Enter string s: "<<endl;
    getline(cin,s);
    cout<<"Enter string s2: "<<endl;
    getline(cin,s2);
    cout<<"Permutation: "<<checkInclusion(s,s2);
    return 0;
} */

/* 
Remove all adjacent duplicates in string.
i/p - a b b a c a
o/p - c a
*/
#include <iostream>
using namespace std;
string removeAdjdup(string s){
    string temp = "";
    int i = 0;
    while(i<s.size()){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i = 0;
        }
        else{
            i++;
        }
    }
    return s;
}
int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Result: "<<removeAdjdup(s)<<endl;
    return 0;
}

