// Problem : Count ways to reach nth stair. We have been given a number of stars. Initially, we are at the 0th stair and we have to reach the nth stair. Each time we can climb one step or two step. We are supposed to return the number of disinct ways in which we can climb from the 0th step to nth step.

#include <iostream>
using namespace std;

int countWay(int nStairs){
    //base case
    if(nStairs<0)
        return 0;
    if(nStairs == 0)
        return 1;
    int ans = countWay(nStairs-1)+countWay(nStairs-2);
    return ans;
}

int main() {
    int n;
    cout<<"Enter number of Stairs: "<<endl;
    cin>>n;
    int res = countWay(n);
    cout<<"Number of ways to destination: "<<res<<endl;
    return 0;
}
