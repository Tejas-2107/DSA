class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    int solveTab(string s, string sRev)
    {

        int n = s.length();
        int m = sRev.length();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = m - 1; j >= 0; --j)
            {
                if (s[i] == sRev[j])
                {
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }

        return dp[0][0];
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        return solveTab(s1, s2);
    }
};