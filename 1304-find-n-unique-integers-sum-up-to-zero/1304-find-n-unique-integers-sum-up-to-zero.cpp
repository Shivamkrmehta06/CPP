class Solution {
public:
    vector<int> sumZero(int n) {
        int start = 0,end = n-1,i = 0, j = end, x = 1;
        vector<int> arr(n);
        int mid = start+(end-start)/2;
        if(n%2!=0) arr[mid] = 0;
        while(i<j){
            arr[i] = -(x);
            arr[j] = x;
            x++;
            i++;
            j--;
        }
        for(auto x:arr) cout<<x<<" ";
        return arr;
    }
};