// All string functions will be discussed below - 

#include <iostream>
using namespace std;

int main() {
    string s("Shivam Kumar Mehta");
    string b("Kunal Kumar Mehta");
    cout<<s.length()<<endl;
    cout<<s.empty()<<endl; // checks string is empty or not?
    cout<<s.at(0)<<endl; // returns the character at given index
    cout<<s.front()<<" "<<s.back()<<endl; // returns the character at first and back
    cout<<s.append(" @dsu")<<endl;
    //s.push_back('!');
    cout<<s<<endl;
    s.pop_back(); // removes out the last element
    cout<<s<<endl;
    cout<<s.substr(0,5)<<endl;
    cout<<s.find("a")<<endl; // returns the index of the element or string
    cout<<s.erase(s.find("Mehta"),5)<<endl; // requires position and size of the string
    cout<<s.insert(13,"Mehta")<<endl; // requires position and string
    cout<<s.replace(7,5,"Kr.")<<endl; // requires postion, length and string
    cout<<s.compare(b)<<endl;
    /* 
    if s.compare output:
     = 0; str1 == str2
     <0; str1 is less than str2, str1<str2
     >0; str1 is greater than str2, str1>str2
    */
    return 0;
}
