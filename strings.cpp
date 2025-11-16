/* #include <iostream>
using namespace std;

int main() {
    string name1;
    cout<<"Enter your Name: "<<endl;
    getline(cin,name1); //to read whole string as 'cin' can't!
    cout<<name1<<endl;
    return 0; 

    string s;
    cout<<"Enter your name: "<<endl; 
    getline(cin,s);   
    cout<<s<<endl;
} */

// Length of string

/* #include <iostream>
using namespace std;
int stringLength(string s){
    int count = 0;
    for(int i = 0;i<s.size();i++){
        count++;
    }
    return count;
}

int charLength(char arr[]){
    int count = 0;
    for(int i = 0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {
    char arr[20];
    cout<<"Enter: "<<endl;
    cin>>arr;
    int len = stringLength(arr);
    int len1 = charLength(arr);
    cout<<"Using stringLength: "<<len<<endl;
    cout<<"Using charLength: "<<len1<<endl; 

    string s;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    cout<<s<<endl;
    int len2 = stringLength(s);
    //int len3 = charLength(s);
    cout<<"Using String Length: "<<len2<<endl;
    //cout<<"Using char Length: "<<len3<<endl;
    return 0;
} */

//Reverse a String

/* #include <iostream>
using namespace std;

void reverseString(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start<end){
        char temp;
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    cout<<s<<endl;
}

int main() {
    char arr[20];
    string s;
    //cout<<"Enter: "<<endl;
    //cin>>arr;
    cout<<"Enter String: "<<endl;
    getline(cin,s); 
    reverseString(s);
    reverseString(s);
    return 0;
} */
//Check if string is Pallindrome

/* #include <iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'a' + 'A';
        return temp; 
    }
}

bool checkPallindrome(string s){
    int start = 0;
    int end = s.size()-1;
    string s2;
    for(int i = 0;i<s.size();i++){
        s2.push_back(toLowerCase(s[i]));
    }
    cout<<s2<<endl;
    while(start<=end){
        if(s[start]!=s[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}



int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"String is Pallindrome: "<<checkPallindrome(s)<<endl;
    return 0;
} */

/* #include <iostream>
using namespace std;
 
char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

string toLowerStr(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}
string toUpperStr(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    return s;
}
int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"Lowercase: "<<toLowerStr(s)<<endl;;;;
    cout<<"Uppercase: "<<toUpperStr(s)<<endl;
    return 0;
}
 */

// Removing Spaces, Special Characters and Numbers from string.
/* 
#include <iostream>
using namespace std;
char removeSpace(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return ch;
    }
    else{
        return '\0';
    }
}

string toLower(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
}

int main() {
    string s;
    string temp;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    for(int i = 0;i<s.size();i++){
        temp.push_back(removeSpace(s[i]));
    }
    cout<<"After Rectifying String: "<<endl;
    cout<<temp<<endl;
    return 0;
} */

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