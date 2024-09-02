// Given a string 'str' of size ‘n’. The task is to remove or delete the minimum number of characters from the string so that the resultant string is a palindrome. Find the minimum number of characters we need to remove.
// Note: The order of characters should be maintained.

class Solution
{
public:
    // gives tle
    //  int solve(vector<vector<int>>&dp, string s, string sRev, int i, int j){

    //     if( i >= s.length() or j >= sRev.length()){
    //         return 0;
    //     }
    //     if(dp[i][j] != -1){
    //         return dp[i][j];
    //     }

    //     if(s[i] == sRev[j]){
    //         dp[i][j] = 1 + solve(dp, s, sRev, i + 1, j + 1);
    //     }
    //     else{
    //       dp[i][j] = max(solve(dp, s, sRev, i, j + 1), solve(dp, s, sRev, i + 1, j));
    //     }

    //     return dp[i][j];

    // }
    int minDeletions(string a1, int n)
    {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        string a2 = a1;
        reverse(a2.begin(), a2.end());
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (a1[i - 1] == a2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return n - dp[n][n];
    }