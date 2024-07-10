#include <bits/stdc++.h>
using namespace std;

// recursion + memoization
class Solution
{
public:
    int sol(vector<int> arr, int sum, int n, vector<vector<int>> &dp)
    {

        if (sum == 0)
        {
            return 1;
        }
        if (n == 0)
        {
            return 0;
        }
        if (dp[n - 1][sum] != -1)
        {
            return dp[n - 1][sum];
        }
        if (sum - arr[n - 1] >= 0)
        {
            // exclude or include two options
            if (sol(arr, sum - arr[n - 1], n - 1, dp) || sol(arr, sum, n - 1, dp))
            {
                return dp[n - 1][sum] = 1;
            }
            return dp[n - 1][sum] = 0;
        }

        return dp[n - 1][sum] = sol(arr, sum, n - 1, dp);
    }
    bool isSubsetSum(vector<int> arr, int sum)
    {
        int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
        if (sol(arr, sum, n, dp))
            return 1;
        return 0;
    }
};

// bottom up dp(tabulation)

class Solution
{
public:
    bool isSubsetSum(vector<int> arr, int sum)
    {
        int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        for (int i = 0; i <= n; ++i)
        {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= sum; ++j)
            {
                if (j - arr[i - 1] >= 0)
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][sum];
    }
};