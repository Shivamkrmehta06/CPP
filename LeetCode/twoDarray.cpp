/* Initialising 2D array using normal methoe

#include <iostream>
using namespace std;

int main() {
    int arr[][3] = {{1,2,4},{2,3,8}};
    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    // trying to create a two-dimensional array using vectors
     vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<a.size();i++){
        for(int j = 0;j<a.size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 

    // trying to create an array using pointers
    int n;
    cout<<"Enter Size of Array: "<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter a Value: "<<endl;
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++){
        cout<<i[arr]<<" ";
    }
    
    return 0;
} */

// Searching in 2D array.

/* #include <iostream>
using namespace std;

bool verifyKey(int arr[3][4],int key){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            if(arr[i][j] == key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{3,5,3,2}};
    int key;
    cout<<"Enter Key: "<<endl;
    cin>>key;
    if(verifyKey(arr,key)){
        cout<<"Element found"<<endl;
    }
    else cout<<"Element is not Found"<<endl;
    return 0;
} */

/* #include <iostream>
using namespace std;

void rowSum(int arr[3][4]){
    int sum[3] = {0};
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            sum[i] += arr[i][j];
        }
    }
    
    for(int i = 0;i<3;i++){
        cout<<sum[i]<<endl;
    }
}


int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{3,5,3,2}};
    cout<<"Sum: "<<endl;
    rowSum(arr);
    return 0;
} */

/* #include <iostream>
using namespace std;

int largestRS(int arr[][4],int row,int col){
    int maxi = -1;
    int rowIndex = -1;
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
                maxi = sum;
                rowIndex = i;
        }
    }
    cout<<"Maximum Sum: "<<maxi<<endl;
    return rowIndex;
}

int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{3,5,3,2}};
    int result = largestRS(arr,3,4);
    cout<<"Row Index: "<<result<<endl;
    return 0;
} */

// Wave print { 3*3 Matrix}
/* #include <iostream>
using namespace std;

void wavePrint(int arr[3][3]){
    for(int i = 0;i<3;i++){
        if(i%2 == 0){
            for(int j = 0;j<3;j++){
                cout<<arr[j][i]<<" ";
        }   
        }
        else{
            for(int l = 2;l>=0;l--){
                cout<<arr[l][i]<<" ";
            }
            }
        }
        }

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    wavePrint(arr);
    return 0;
} */

// Wave print {3 * 4 Matrix}

/* #include <iostream>
using namespace std;

void wavePrint(int arr[3][4]){
    for(int i = 0;i<4;i++){
        if(i%2 == 0){
            for(int j = 0;j<3;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int l = 2;l>=0;l--){
                cout<<arr[l][i]<<" ";
            }
        }
    }
}

int main() {
    int arr[3][4] = {{1,2,3,2},{4,5,6,3},{7,8,9,4}};
    wavePrint(arr);
    return 0;
} */
