#include <iostream>
using namespace std;

int revBits(int n){
    int rev = 0;
    while(n!=0){
        int bit = n&1;
        rev = (rev<<1)|bit;
        n = n>>1;
    }
    return rev;
}

int main() {
    int n;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    int ans = revBits(n);
    cout<<"Reversed Bit: "<<ans<<endl;
    return 0;
}
