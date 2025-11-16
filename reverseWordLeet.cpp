/* 
Reverse words in a string. given a character array reverse the order of words.
i/p - My Name is Love.
o/p = yM eamN si evoL.
*/

/* #include <iostream>
#include<utility>
using namespace std;

string reverseWord(string s){
    int start = 0;
    int end = s.size()-1;
    while(start<end){
        swap(s[start++],s[end--]);
    }
    return s;
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    string temp = "";
    string result = "";
    for(int i = 0;i<s.size();i++){
        if(s[i] == ' ' || i == s.size()-1){
            result += reverseWord(temp);
            result += ' ';
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    cout<<result<<endl;
    return 0;
} */

#include <iostream>
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
}