// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.

#include <iostream>
#include<unordered_set>
using namespace std;

void happyNum(int n){
    unordered_set<int> seen;
    if(n == 1){
        cout << "Happy Number 😊" << endl;
        return;
    }

    if(seen.count(n)){
        cout << "Not a Happy Number 😐" << endl;
        return;
    }

    seen.insert(n);

    int r = 0;
    while(n != 0){
        int digit = n % 10;
        r += digit * digit;
        n /= 10;
    }

    cout << r << endl;
    happyNum(r);
}


int main() {
    happyNum(2);
    return 0;
}
