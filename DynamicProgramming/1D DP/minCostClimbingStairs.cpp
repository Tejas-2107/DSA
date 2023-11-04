// Recursion + Memoization
// Spcae Complexity:o(n) + o(n) (Stack Call) Time Complexity:o(n)
class Solution
{
public:
    int solve(vector<int> &cost, int n, vector<int> &dp)
    {
        // base case
        if (n <= 1)
        {
            return cost[n];
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }
        // recusrion call
        dp[n] = cost[n] + min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        int ans = min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
        return ans;
    }
};

// Tabulation Method
// Spcae Complexity:o(n) Time Complexity:o(n)

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < n; ++i)
        {
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
        }
        return min(dp[n - 1], dp[n - 2]);
    }
};

// Space Optimized
//  Spcae Complexity:o(1) Time Complexity:o(n)

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int cost1 = cost[0], cost2 = cost[1];
        int n = cost.size();

        for (int i = 2; i < n; ++i)
        {
            int currCost = min(cost1, cost2) + cost[i];
            cost1 = cost2;
            cost2 = currCost;
        }
        return min(cost1, cost2);
    }
};