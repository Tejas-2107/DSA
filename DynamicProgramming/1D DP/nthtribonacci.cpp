// Recursion  + Memoization o(n) o(n)

class Solution
{
public:
    int solve(int n, vector<int> &dp)
    {
        if (n <= 0)
        {
            return 0;
        }
        if (n == 2 or n == 1)
        {
            return 1;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }
        dp[n] = (solve(n - 1, dp) + solve(n - 2, dp) + solve(n - 3, dp));
        return dp[n];
    }
    int tribonacci(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};

// Space optimization o(1)
class Solution
{
public:
    int tribonacci(int n)
    {
        int x = 0, y = 1, z = 1;
        if (n == 0)
            return 0;
        if (n == 1 or n == 2)
            return 1;

        for (int i = 3; i <= n; ++i)
        {
            int curr = x + y + z;
            x = y;
            y = z;
            z = curr;
        }

        return z;
    }
};