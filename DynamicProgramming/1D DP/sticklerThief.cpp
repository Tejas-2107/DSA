// Reacursion + memoization
class Solution
{
public:
    // Function to find the maximum money the thief can get.
    int solve(int n, int arr[], vector<int> &dp)
    {
        if (n < 0)
        {
            return 0;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }

        int include = solve(n - 2, arr, dp) + arr[n];
        int exclude = solve(n - 1, arr, dp);

        return dp[n] = max(include, exclude);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n + 1, -1);
        return solve(n - 1, arr, dp);
    }
};

// tabulation
int FindMaxSum(int arr[], int n)
{

    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = arr[0];

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = max(dp[i - 1], arr[i - 1] + dp[i - 2]);
    }
    return dp[n];
}

// Space optimization

int FindMaxSum(int arr[], int n)
{

    int prev1 = 0, prev2 = arr[0];
    for (int i = 1; i < n; ++i)
    {
        int ans = max(prev2, arr[i] + prev1);
        prev1 = prev2;
        prev2 = ans;
    }
    return prev2;
}
