// Given an array arr[] of length N and an integer X, the task is to find the number of subsets with a sum equal to X.
class Solution
{

public:
    long long mod = 1e9 + 7;
    int perfectSum(int arr[], int n, int sum)
    {
        // Your code goes here
        vector<vector<int>> t(n + 1, vector<int>(sum + 1, 0));
        
        for (int i = 0; i <= n; ++i)
        {
            t[i][0] = 1;
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= sum; ++j)
            {
                if (arr[i - 1] <= j)
                {
                    t[i][j] = (t[i - 1][j - arr[i - 1]] + t[i - 1][j]) % mod;
                }
                else
                {
                    t[i][j] = (t[i - 1][j]) % mod;
                }
            }
        }

        return t[n][sum];
    }
};