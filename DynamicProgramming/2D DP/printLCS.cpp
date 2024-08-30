#include<bits/stdc++.h>
using namespace std;
string longestCommonSubsequence(string text1, string text2)
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
    string lcs = "";

    int i = text1.size(), j = text2.size();

    while (i > 0 and j > 0)
    {
        if (text1[i - 1] == text2[j - 1])
        {
            lcs.push_back(text1[i - 1]);
            --i;
            --j;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
            {
                --i;
            }
            else
            {
                --j;
            }
        }
    }
    reverse(lcs.begin(),lcs.end());
    return lcs;
}

int main(){
    cout << longestCommonSubsequence("abcdaf","acbcf");
    return 0;
}