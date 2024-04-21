int solve(vector<int> &dp, int n)
{
    // ba

    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int ans = n;

    for (int i = 1; i <= sqrt(n); ++i)
    {
        ans = min(ans, 1 + solve(dp, n - (i * i)));
    }
    return dp[n] = ans;
}

int solveTab(int n)
{

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {

        for (int j = 1; j <= sqrt(i); ++j)
        {

            int sqr = j * j;
            if (i - sqr >= 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - sqr]);
            }
        }
    }

    return dp[n];
}