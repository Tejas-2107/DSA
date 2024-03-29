// Recusrion + Memoization

int solve(int n, int x, int y, int z, vector<int> &dp)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    // recursion call
    int p = solve(n - x, x, y, z, dp) + 1;
    int q = solve(n - y, x, y, z, dp) + 1;
    int r = solve(n - z, x, y, z, dp) + 1;

    return dp[n] = max({p, q, r});
}
int maximizeTheCuts(int n, int x, int y, int z)
{
    // Your code here
    vector<int> dp(n + 1, -1);
    int ans = solve(n, x, y, z, dp);

    if (ans > 0)
    {
        return ans;
    }

    return 0;
}

// Tabulation spcae optimization

int maximizeTheCuts(int n, int x, int y, int z)
{
    // Your code here
    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (i - x >= 0)
        {
            dp[i] = max(dp[i], dp[i - x] + 1);
        }
        if (i - y >= 0)
        {
            dp[i] = max(dp[i], dp[i - y] + 1);
        }
        if (i - z >= 0)
        {
            dp[i] = max(dp[i], dp[i - z] + 1);
        }
    }

    if (dp[n] <= 0)
    {
        return 0;
    }

    return dp[n];
}