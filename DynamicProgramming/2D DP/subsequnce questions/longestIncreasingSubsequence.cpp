//t.c , s.c =  o(n^2)
//recursion + memo (topDown)
class Solution
{
public:
    int topDown(vector<int> &arr, int curr, int prev, vector<vector<int>> &dp)
    {
        if (curr >= arr.size())
            return 0;
        if (dp[curr][prev + 1] != -1)
            return dp[curr][prev + 1];
        int take = 0;
        if (prev == -1 || arr[curr] > arr[prev])
        {
            take = 1 + topDown(arr, curr + 1, curr, dp);
        }

        return dp[curr][prev + 1] = max(take, topDown(arr, curr + 1, prev, dp));
    }
    int lis(vector<int> &arr)
    {
        // code here
        int curr = 0, prev = -1;
        vector<vector<int>> dp(arr.size(), vector<int>(arr.size() + 1, -1));
        return topDown(arr, curr, prev, dp);
    }
};

//bottom up

