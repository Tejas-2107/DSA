//shortestCommonSupersequence nothing but the addition of the characters of the two strings such that the common characters are added only once.
string shortestCommonSupersequence(string text1, string text2)
{
    vector<vector<int>> dp(text1.size() + 1,
                           vector<int>(text2.size() + 1, 0));

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
    string scs = "";

    int i = text1.size(), j = text2.size();

    while (i > 0 and j > 0)
    {
        if (text1[i - 1] == text2[j - 1])
        {
            scs.push_back(text1[i - 1]);
            --i;
            --j;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
            {
                scs.push_back(text1[i - 1]);
                --i;
            }
            else
            {
                scs.push_back(text2[j - 1]);
                --j;
            }
        }
    }
    //push remaining characters to make supersequence
    
    while (i > 0)
    {
        scs.push_back(text1[i - 1]);
        --i;
    }
    while (j > 0)
    {
        scs.push_back(text2[j - 1]);
        --j;
    }
    reverse(scs.begin(), scs.end());
    return scs;
}