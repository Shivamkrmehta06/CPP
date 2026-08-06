class Solution {
private:
    int solve(int &n,int t){
        //product lele
        int product = 1;
        int rev = 0;
        int xi = n;
        while(xi!=0){
            int digit = xi%10;
            product *= digit;
            xi = xi/10;
        }
        cout<<"Product: "<<product<<endl;
        if(product%t==0) return n;
        int next = n+1;
        return solve(next,t);   
    }
public:
    int smallestNumber(int n, int t) {
        int ans = solve(n,t);
        return ans;
    }
};