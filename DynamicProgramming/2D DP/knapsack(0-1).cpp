class Solution
{
public:
    // Function to return max value that can be put in knapsack of capacity W.
    int maxProfit(int w, int wt[], int val[], int n, vector<vector<int>> &t)
    {
        if (w == 0 || n == 0)
        {
            return 0;
        }
        if (t[n][w] != -1)
        {
            return t[n][w];
        }
        int first = 0;
        if (wt[n - 1] <= w)
        {
            // first call include and second one is for exclude
            first = val[n - 1] + maxProfit(w - wt[n - 1], wt, val, n - 1, t);
        }

        int second = maxProfit(w, wt, val, n - 1, t);
        return t[n][w] = max(first, second);
    }
    int knapSack(int w, int wt[], int val[], int n)
    {
        // Your code here
        vector<vector<int>> t(n + 1, vector<int>(w + 1, -1));

        return maxProfit(w, wt, val, n, t);
    }
};
// Tabulation

class Solution
{
public:
    int knapSack(int w, int wt[], int val[], int n)
    {
        // Your code here
        vector<vector<int>> t(n + 1, vector<int>(w + 1));

        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= w; ++j)
            {
                if (i == 0 or j == 0)
                {
                    t[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            // j = curr weight
            for (int j = 1; j <= w; ++j)
            {
                if (wt[i - 1] <= j)
                {
                    t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
                }
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }

        return t[n][w];
    }
};
