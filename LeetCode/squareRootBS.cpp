
//Find Square Root using Binary Search.


#include <iostream>
using namespace std;

int squareRootBS(int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if((mid*mid) <= n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

/* double morePrecision(int n,int tempSol,int deciRange){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0;i<=deciRange;i++){
        factor = factor/10;
        for(double j = ans;j*j<n;j+=factor){
            ans = j;
        }
    }
    return ans;
} */

int main() {
    int a;
    int b;
    cout<<"Enter a Value: "<<endl;
    cin>>a;
    cout<<"Enter Decimal Precision: "<<endl;
    cin>>b;
    int tempSol = squareRootBS(a);
    //double c = morePrecision(a,tempSol,b);
    //cout<<"Square Root of "<<a<<" is "<<c<<endl;
    cout<<"Answer: "<<tempSol<<endl;
    return 0;
}

