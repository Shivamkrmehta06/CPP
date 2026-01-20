// Divide two integers without using Multiplication,Division and Mod operator.

#include <iostream>
#include<cmath>
using namespace std;

int divide(int dividened,int divisor){
    vector<int> q; 
    for(int i = 0;i<=dividened;i++){
        int qe = divisor<<i;
        if(qe<=dividened)
            q.push_back(qe);
        else break;
     }       
     int nom = q.size()-1;     
     int minus = dividened - q[nom];     
     //for(auto x:q) cout<<x<<" ";            
     //cout<<endl<<minus;
     int quo = 1<<nom;
     //cout<<endl<<quo<<endl;
     int rem;
     if(minus<divisor){
        return quo;
     }
     else{
        quo = quo +divide(minus,divisor);
        return quo;
    }
}

int main() {
    int de = 220, di = 5;
    int ans = divide(de,di);
    cout<<ans<<endl;
    return 0;
}