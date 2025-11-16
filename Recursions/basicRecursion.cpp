/* 
Recursion basically means that when a function calls itself.
Kisi Badi problem ko solve krne ke liye usi type ke choti problem ko solve krna

Recursion consists of 3 components - 
-> Base Case (return is mandatory)
-> Processing 
-> Recursive Relation
The above conditions are of tail recursion in which the recursive relation is below 
processing

Head Recursion - Condition in which the recursive relation is above of processing
-> Base Case (return is manadatory)
-> Recursive Relation
-> Processing


#include <iostream>
using namespace std;
 void checkNum(int n){
    if(n<0){
        cout<<"Negative Number"<<endl;
        return;
    }
    cout<<"Positive Number"<<endl;
}
int main() {
    
    return 0;
}


// Power of 2^n

# include <iostream>
using namespace std;

int powerof2(int n){
    
    //base case
    if(n == 0){
        return 1;
    }

    int smallerProblem = powerof2(n-1);
    int biggerProblem = 2 * smallerProblem;
    return biggerProblem;
}

int main() {
    int n;
    cout<<"Enter Value: "<<endl;
    cin>>n;
    cout<<powerof2(n)<<endl;
    return 0;
} 

 #include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0)
        return 1;
    
    int sP = factorial(n-1);
    int bP = n*sP;
    return bP;
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
} */

// Counting numbers

/* #include <iostream>
using namespace std;

void countingTailRecursion(int n){
    if(n == 0)
        return;

    cout<<n<<" ";
    countingTailRecursion(n-1);
}

void countingHeadRecursion(int n){
    if(n == 0){
        return;
    }
    countingHeadRecursion(n-1);
    cout<<n<<" ";
}


int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    countingHeadRecursion(n);
    return 0;
} */

// Ghar phauchne wala question
/* #include <iostream>
using namespace std;

void getDinfo(int source,int destination){
    cout<<"Source: "<<source<<" Destination: "<<destination<<endl;
    if(source == destination)
        return ;
    
    getDinfo(source+1,destination);
    
}

int main() {
    int source = 1;
    int desti;
    cout<<"Enter Distance: "<<endl;
    cin>>desti;
    getDinfo(source,desti);
    return 0;
} */

// Fibonacci Series

/* #include <iostream>
using namespace std;

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    cout<<"Fibonacci Value at "<<n<<" is "<<fib(n)<<endl;
    return 0;
} 

// Count ways to reach nth stair

/* #include <iostream>
using namespace std;
int stairWay(int n){
    if(n<0)
        return 0;
    if(n == 0)
        return 1;
    int ans = stairWay(n-1) + stairWay(n-2);
    return ans;
}
int main() {
    int n;
    cout<<"Enter number of Stair: "<<endl;
    cin>>n;
    cout<<"Result: "<<stairWay(n)<<endl;
    return 0;
} */





