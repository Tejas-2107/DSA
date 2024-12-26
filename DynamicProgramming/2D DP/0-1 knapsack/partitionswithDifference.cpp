// Given an array arr, partition it into two subsets(possibly empty) such that each element must belong to only one subset. Let the sum of the elements of these two subsets be S1 and S2.
// Given a difference d, count the number of partitions in which S1 is greater than or equal to S2 and the difference between S1 and S2 is equal to d. Since the answer may be large return it modulo 109 + 7.

// recusrion + memoization
class Solution
{
public:
    long long mod = 1e9 + 7;
    int solve(vector<int> &nums, int target, int currSum, int n, vector<vector<int>> &dp)
    {
        if (n == 0)
        {
            return currSum == target;
        }

        if (dp[n - 1][currSum] != -1)
        {
            return dp[n - 1][currSum];
        }
        if (currSum + nums[n - 1] <= target)
        {
            return dp[n - 1][currSum] = (solve(nums, target, currSum + nums[n - 1], n - 1, dp) % mod + solve(nums, target, currSum, n - 1, dp) % mod) % mod;
        }

        return dp[n - 1][currSum] = solve(nums, target, currSum, n - 1, dp) % mod;
    }
    int countPartitions(int n, int d, vector<int> &arr)
    {
        // Code here

        int sum = 0;
        for (auto i : arr)
            sum += i;
            //s1+s2=sum
        if (sum - d < 0)
        {
            return 0;
        }
        vector<vector<int>> dp(arr.size() + 1, vector<int>(sum + 1, -1));

        return solve(arr, (sum - d) / 2, 0, n, dp) % mod;
    }
};
