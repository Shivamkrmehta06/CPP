// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

#include <iostream>
using namespace std;

vector<int> reverseArray(vector<int> &arr,int start,int end){
    if(start>=end){
        return arr;
    }
    swap(arr[start],arr[end]);
    return reverseArray(arr,start+1,end-1);
}

vector<int> getNum(vector<int> &arr){
    int number = 0;
    for(int i = 0;i<arr.size();i++){
        number = number*10+arr[i];
    }
    int newNum = number+1;
    vector<int> result;
    if(newNum == 0) result.push_back(0);
    while(newNum>0){
        int digit = newNum%10;
        result.push_back(digit);
        newNum = newNum/10;
    } 
    reverseArray(result,0,result.size()-1);
    for(auto x:result) std::cout<<x<<endl;
    return result;
}

int main() {
    vector<int> arr = {9};
    vector<int> res = getNum(arr);
    for(auto x:res) cout<<x<<" ";
    return 0;
}
