class Solution {
private:
    int solve(int n,vector<int> &dp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1);
        for(int i=0;i<dp.size();i++){
            dp[i] = -1;
        }
        int ans = solve(n,dp);
        cout<<ans<<endl;
        return ans;
    }
};