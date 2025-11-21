#include <iostream>
#include<map>
using namespace std;

void cvtRomanToInt(string s){
    int result = 0;
    map<char,int> m;
    m['I'] = 1;m['V'] = 5, m['X'] = 10; m['L'] = 50, m['C'] = 100, m['D'] = 500, m['M'] = 1000;
    int i = 0;
    for(int i = 0;i<s.length();i++){
        int current = m[s[i]];
        int next = i+1 < s.length() ? m[s[i+1]]:0;

        if(current>=next){
            result += m[s[i]];
        }
        else{
            result -= m[s[i]];
        }
    }
    cout<<s<<" Integer form is "<<result<<endl;
}

int main() {
    string s;
    // cout<<"Enter a Roman Number: "<<endl;
    // cin>>s;
    cvtRomanToInt("C");
    return 0;
}
