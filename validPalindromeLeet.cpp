#include <iostream>
using namespace std;

string removeSpace(string s){
    string s2;
    for(int i = 0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            s2.push_back(s[i]);
        }
    }
    return s2;
}

string toLowerCase(string s){
    string s2;
    for(int i = 0;i<s.size();i++){
        if((s[i]>='A'&&s[i]<='Z')){
            char ch = s[i] - 'A' + 'a';
            s2.push_back(ch);
        }
        else{
            s2.push_back(s[i]);
        }
    }
    return s2;
}

bool checkPallindrome(string s){
    s = removeSpace(s);
    s = toLowerCase(s);
    int start = 0;
    int end = s.size() - 1;
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    if(checkPallindrome(s)){
        cout<<"String is Pallindrome!"<<endl;
    }
    else{
        cout<<"String is not Pallindrome!"<<endl;
    }
    return 0;
}

