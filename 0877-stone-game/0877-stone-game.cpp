class Solution {
private:
    int solve(vector<int> &piles,int start,int end,vector<vector<int>> &dp){
        if (start == end)
            return piles[start];

        if (dp[start][end] != -1)
            return dp[start][end];

        int left = piles[start] - solve(piles, start + 1, end, dp);
        int right = piles[end] - solve(piles, start, end - 1, dp);

        return dp[start][end] = max(left, right);
    }
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(piles,0,piles.size()-1,dp);
    }
};