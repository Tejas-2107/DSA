class Solution
{
public:
    int solve(vector<int> &dp, int n, vector<int> &days, vector<int> &costs, int index)
    {

        if (index >= n)
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }
        int dayOnePass = costs[0] + solve(dp, n, days, costs, index + 1);
        int i;
        for (i = 0; i < n and days[i] < days[index] + 7; ++i)
        {
        }
        int daySevenPass = costs[1] + solve(dp, n, days, costs, i);
        for (i = 0; i < n and days[i] < days[index] + 30; ++i)
        {
        }
        int dayThirtyPass = costs[2] + solve(dp, n, days, costs, i);

        return dp[index] = min({dayOnePass, daySevenPass, dayThirtyPass});
    }
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
        vector<int> dp(n + 1, -1);

        return solve(dp, n, days, costs, 0);
    }
};