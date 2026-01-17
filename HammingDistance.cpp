// Count no of bits
#include <iostream>
using namespace std;

int countOneBit(int n){
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main() {
    int a = 3,b = 1;
    int c = a^b;
    int result = countOneBit(c);
    cout<<"Hamming Distance: "<<result<<endl;
    return 0;
}
