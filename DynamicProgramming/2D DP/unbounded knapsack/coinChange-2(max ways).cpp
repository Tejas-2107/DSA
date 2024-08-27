public:
int topDown(vector<int> &c, int amount, vector<vector<long long>> &dp,
            int n)
{
    if (n == 0)
    {
        return amount == 0;
    }
    if (amount < 0)
        return 0;

    if (dp[n][amount] != -1)
        return dp[n][amount];

    return dp[n][amount] = topDown(c, amount - c[n - 1], dp, n) + topDown(c, amount, dp, n - 1);
}
int change(int amount, vector<int> &coins)
{
    vector<vector<long long>> dp(coins.size() + 1,
                                 vector<long long>(amount + 1, -1));
    return topDown(coins, amount, dp, coins.size());
}
}
;

int bottoUp(int amount, vector<int> &coins)
{
    vector<vector<long long>> dp(coins.size() + 1,
                                 vector<long long>(amount + 1, 0));
    for (int i = 0; i <= coins.size(); ++i)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= coins.size(); ++i)
    {
        for (int j = 1; j <= amount; ++j)
        {
            if (j >= coins[i - 1])
            {
                dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[coins.size()][amount];
}