// Recusrion Solution TLE
class Solution
{

public:
    int recursion(int index, int target, int coins[])
    {

        if (index == 0)
        {
            if (target % coins[0] == 0)
            {
                return target / coins[0];
            }
            return 1e9;
        }

        int notTakeCoin = 0 + recursion(index - 1, target, coins);
        int takeCoin = INT_MAX;

        if (coins[index] <= target)
        {
            takeCoin = 1 + recursion(index, target - coins[index], coins);
        }

        return min(notTakeCoin, takeCoin);
    }
    int minCoins(int coins[], int m, int target)
    {
        // Your code goes here
        int ans = recursion(m - 1, target, coins);

        if (ans >= 1e9)
        {
            return -1;
        }
        return ans;
    }
};

// Recusrion + Memoization
// time complexity o(m*target) spcae : o(target)

class Solution
{

public:
    int recursion(int index, int target, int coins[], vector<vector<int>> &dp)
    {

        if (index == 0)
        {
            if (target % coins[0] == 0)
            {
                return target / coins[0];
            }
            return 1e9;
        }

        if (dp[index][target] != -1)
        {
            return dp[index][target];
        }

        int notTakeCoin = 0 + recursion(index - 1, target, coins, dp);
        int takeCoin = INT_MAX;

        if (coins[index] <= target)
        {
            takeCoin = 1 + recursion(index, target - coins[index], coins, dp);
        }

        return dp[index][target] = min(notTakeCoin, takeCoin);
    }
    int minCoins(int coins[], int m, int target)
    {
        // Your code goes here
        vector<vector<int>> dp(m, vector<int>(target + 1, -1));
        int ans = recursion(m - 1, target, coins, dp);

        if (ans >= 1e9)
        {
            return -1;
        }
        return ans;
    }
};