//If we want to give two elements consecutively in memory without using an array then we use Pair.

#include <iostream>
using namespace std;

int main() {
    pair <int,int> p;
    p.first = 5;
    p.second = 7;
    cout<<"First: "<<p.first<<endl<<"Second: "<<p.second<<endl;
    return 0;
}
