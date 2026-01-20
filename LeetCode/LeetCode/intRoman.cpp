#include <iostream>
#include<map>
using namespace std;

string cvtRoman(int n){
    int sub = 0;
    map<int,string> roman;
    roman[1000] = "M",roman[900] = "CM",roman[500] = "D", roman[400] = "CD", roman[100] = "C", roman[90] = "XC", roman[50] = "L", roman[40] = "XL", roman[10] = "X", roman[9] = "IX", roman[5] = "V",roman[4] = "IV", roman[1] = "I";
    
    string result = "";

    for(auto i = roman.rbegin(); i!= roman.rend();i++){
        while(n >= i->first){
            result += i->second;
            n = n - i->first;
        }
    }
    return result;
}

int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    
    string ans = cvtRoman(n);
    cout<<"Roman Number for "<<n<<" is "<<ans<<endl;

    return 0;
}
