int longestCommonSubstr(string t1, string t2)
{
    // your code here
    int m = t1.size(), n = t2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int len = 0;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (t1[i - 1] == t2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                len = max(len, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return len;
}