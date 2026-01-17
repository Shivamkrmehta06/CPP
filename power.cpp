#include <iostream>
using namespace std;
double power(double x,int n){
    long long exp = n;
    if(exp<0) exp = -exp;
    double res = 1.0;
    for(int i = 0;i<exp;i++){
        res *= x;
    }
    if(n<0){
        return 1.0/res;
    }
    else{
        return res;
    }
}

int main() {


    // double ans = power(2,-2);
    // cout<<ans<<endl;
    return 0;
}
