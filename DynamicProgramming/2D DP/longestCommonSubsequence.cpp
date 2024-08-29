class Solution
{
public:
    int topDown(string t1, string t2, int s1, int s2, vector<vector<int>> &dp)
    {
        if (s1 == 0 || s2 == 0)
            return 0;

        if (dp[s1][s2] != -1)
            return dp[s1][s2];

        if (t1[s1 - 1] == t2[s2 - 1])
        {
            return dp[s1][s2] = 1 + topDown(t1, t2, s1 - 1, s2 - 1, dp);
        }

        return dp[s1][s2] = max(topDown(t1, t2, s1 - 1, s2, dp), topDown(t1, t2, s1, s2 - 1, dp));
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, -1));
        return topDown(text1, text2, text1.size(), text2.size(), dp);
    }
};

int longestCommonSubsequence(string text1, string text2)
{
    vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));

    for (int i = 1; i <= text1.size(); ++i)
    {
        for (int j = 1; j <= text2.size(); ++j)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[text1.size()][text2.size()];
}