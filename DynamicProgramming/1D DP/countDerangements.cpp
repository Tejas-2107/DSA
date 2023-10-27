// Recursion + memoization
int solve(int n, vector<long long> &dp)
{

    if (n <= 2)
    {
        return n - 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = ((n - 1) % mod * (solve(n - 1, dp) % mod + solve(n - 2, dp) % mod)) % mod;

    return dp[n];
}

long long int countDerangements(int n)
{
    // Write your code here.
    vector<long long> dp(n + 1, -1);

    return solve(n, dp);
}

// Tabulation

long long int countDerangements(int n)
{
    if (n <= 2)
    {
        return n - 1;
    }
    vector<long long> dp(n + 1, -1);
    dp[0] = dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; ++i)
    {
        dp[i] = ((i - 1) % mod * (dp[i - 1] % mod + dp[i - 2] % mod)) % mod;
    }

    return dp[n];
}

// Space optimization
long long int countDerangements(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 3; i <= n; ++i)
    {
        int ans = ((i - 1) % mod * (a % mod + b % mod)) % mod;
        a = b;
        b = ans;
    }

    return b;
}