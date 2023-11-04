//Recursion + Memoization
int solve(int index, int capacity, vector<int> val, vector<int> wt, vector<vector<int>> &dp)
{

    if (index == 0)
    {

        if (capacity >= wt[0])
        {
            return val[0];
        }
        else
        {
            return 0;
        }
    }

    if (dp[index][capacity] != -1)
        return dp[index][capacity];

    int take = -1e9;

    if (capacity >= wt[index])
    {
        take = val[index] + solve(index - 1, capacity - wt[index], val, wt, dp);
    }

    int ntake = solve(index - 1, capacity, val, wt, dp);

    return dp[index][capacity] = max(take, ntake);
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    // Write your code here
    vector<vector<int>> dp(n, vector<int>(w + 1, -1));
    return solve(n - 1, w, values, weights, dp);
}

//Tabulation
