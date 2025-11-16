// 12 - One two
#include <iostream>
using namespace std;

void sayDigit(int n,string *ar){
    if(n==0)
        return;
    
    int digit = n%10;
    n = n/10;
    sayDigit(n,ar);
    cout<<ar[digit]<<" ";   
}

int main() {
    int n;
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Enter a Value: "<<endl;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}
