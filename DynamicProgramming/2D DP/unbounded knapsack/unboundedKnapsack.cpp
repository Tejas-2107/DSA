// //Given a set of N items, each with a weight and a value, represented by the array wt and val respectively. Also, a knapsack with weight limit W.
// The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.
// Note: Each item can be taken any number of times.

// recusrion + memoization
class Solution
{
public:
    int solve(int i, int W, int val[], int wt[], vector<vector<int>> &dp)
    {
        if (i < 0)
        {
            return 0;
        }

        if (dp[i][W] != -1)
            return dp[i][W];

        int take = -1e9;
        if (W >= wt[i])
        {
            take = val[i] + solve(i, W - wt[i], val, wt, dp);
        }

        int ntake = solve(i - 1, W, val, wt, dp);
        return dp[i][W] = max(take, ntake);
    }

    int knapSack(int N, int W, int val[], int wt[])
    {

        vector<vector<int>> dp(N + 1, vector<int>(W + 1, -1));
        return solve(N - 1, W, val, wt, dp);
    }
};

// tabulation bottom up appraoch

int knapSack(int N, int W, int val[], int wt[])
{
    // code here
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= W; ++j)
        {
            if (j >= wt[i - 1])
            {
                dp[i][j] = max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[N][W];
}