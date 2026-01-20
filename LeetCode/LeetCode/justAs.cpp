#include <iostream>
using namespace std;

bool isEven(int num){
    return num%2==0?true:false;
}

int main() {
    //condition ? value_if_true : value_if_false;
    int a = 3>1?1:0;
    cout<<a<<endl;

    // bool ans = isEven(54);
    // cout<<ans<<endl;

    vector<int> arr(5,1);
    for(auto x:arr) cout<<x<<" ";

}