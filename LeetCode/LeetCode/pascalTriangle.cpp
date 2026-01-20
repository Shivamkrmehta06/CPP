#include <iostream>
using namespace std;

vector<vector<int>> pascalPattern(int n){
    if(n == 0){
        return {{1}};
    }
    vector<vector<int>> triangle = pascalPattern(n-1);
    vector<int> curr(n+1,1);
    for(int i = 1;i<n;i++){
        curr[i] = triangle[n - 1][i - 1] + triangle[n - 1][i];
    }
    triangle.push_back(curr);
    return triangle;
}

int main() {
    int n = 5;
    vector<vector<int>> ans = pascalPattern(n);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}