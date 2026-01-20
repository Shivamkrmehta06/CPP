/* #include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void solution(int n){
    int *arr = new int[n];
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cout<<"Enter a Value: "<<endl;
    cin>>n;
     int *arr = new int[n];
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    //solution(n);
    return 0;
}
 */

#include <iostream>
using namespace std;

int main() {
    char arr[] = "abcde";
    char *p = &arr[0];
    cout<<p<<endl;
}
