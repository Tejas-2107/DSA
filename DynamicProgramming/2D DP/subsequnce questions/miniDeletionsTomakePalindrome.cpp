// Given a string 'str' of size ‘n’. The task is to remove or delete the minimum number of characters from the string so that the resultant string is a palindrome. Find the minimum number of characters we need to remove.
// Note: The order of characters should be maintained.


class Solution
{
public:
//gives tle 
    // int solve(vector<vector<int>>&dp, string s, string sRev, int i, int j){

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

    int solveTab(string s, string sRev)
    {
        vector<vector<int>> dp(s.length() + 1, vector<int>(s.length() + 1, 0));
        int n = s.length();
        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = n - 1; j >= 0; --j)
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
    int minimumNumberOfDeletions(string s)
    {
        // code here

        string sRev = s;
        reverse(sRev.begin(), sRev.end());

        return (s.size() - solveTab(s, sRev));
    }
};