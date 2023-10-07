// recursion + memoization
class Solution
{
public:
    long long mod = 1e9 + 7;
    int find(int n, vector<int> &dp)
    {
        // step 1 base case reucrsion
        if (n == 0 or n == 1)
        {
            return n;
        }

        // step 2 chcek for dp memoization
        if (dp[n] != -1)
        {
            return dp[n];
        }

        // step 3 recursion call
        dp[n] = (find(n - 1, dp) % mod + find(n - 2, dp) % mod) % mod;

        return dp[n];
    }
    int nthFibonacci(int n)
    {
        // code here
        vector<int> dp(n + 1, -1);

        return find(n, dp);
    }
};

// time complexity o(n)
// spcae o(n)

// tabulation

class Solution
{
public:
    long long mod = 1e9 + 7;

    int nthFibonacci(int n)
    {
        // code here
        vector<int> dp(n + 1, -1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        }
        return dp[n];
    }
};