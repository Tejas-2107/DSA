// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin

class Solution
{
public:
    long long topDown(vector<int> &c, int amount, vector<vector<long long>> &dp,
                      int n)
    {
        if (amount == 0)
        {
            return 0;
        }
        if (amount < 0 || n == 0 and amount != 0)
        {
            return INT_MAX;
        }
        if (dp[n][amount] != -1)
            return dp[n][amount];

        return dp[n][amount] = min(1 + topDown(c, amount - c[n - 1], dp, n),
                                   topDown(c, amount, dp, n - 1));
    }
    int coinChange(vector<int> &coins, int amount)
    {
        vector<vector<long long>> dp(coins.size() + 1,
                                     vector<long long>(amount + 1, -1));

        long long ans = topDown(coins, amount, dp, coins.size());
        if (ans >= INT_MAX)
            return -1;
        return ans;
    }
};

int coinChange(vector<int> &coins, int amount)
{
    vector<vector<long long>> dp(coins.size() + 1,
                                 vector<long long>(amount + 1, INT_MAX-1));
    for (int i = 0; i <= coins.size(); ++i)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= coins.size(); ++i)
    {
        for (int j = 1; j <= amount; ++j)
        {
            if (j >= coins[i - 1])
            {
                dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[coins.size()][amount] == INT_MAX-1)
        return -1;
    return dp[coins.size()][amount];
}