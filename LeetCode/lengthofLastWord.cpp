//"Hello World" -> last word is 5
#include <iostream>
using namespace std;

int lastWord(string s){
    int lastIndex = s.size()-1;
    int count = 0;

    while (lastIndex >= 0 && s[lastIndex] == ' ') {
        //count++;
        lastIndex--;
    }
    while (lastIndex >= 0 && s[lastIndex] != ' ') {
        count++;
        lastIndex--;
    } 

    return count;
}

int main() {
    string s;
    cout<<"Enter a String: "<<endl;
    cin>>s;
    int res = lastWord(s);
    cout<<"Last Word length: "<<res<<endl;
    return 0;
}
