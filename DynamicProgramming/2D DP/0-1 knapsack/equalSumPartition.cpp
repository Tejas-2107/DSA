
//recursion + memoization

class Solution
{
public:
    int solve(vector<int> &nums, int sum, int currSum, int n,
              vector<vector<int>> &dp)
    {
        if (n == 0 || sum % 2)
        {
            return 0;
        }
        if (currSum == sum / 2)
        {
            return 1;
        }
        if (dp[n - 1][currSum] != -1)
        {
            return dp[n - 1][currSum];
        }
        if (currSum + nums[n - 1] <= sum / 2)
        {
            return dp[n - 1][currSum] =
                       (solve(nums, sum, currSum + nums[n - 1], n - 1, dp) ||
                        solve(nums, sum, currSum, n - 1, dp));
        }

        return dp[n - 1][currSum] = solve(nums, sum, currSum, n - 1, dp);
    }
    bool canPartition(vector<int> &nums)
    {

        int sum = 0;
        for (auto i : nums)
            sum += i;
        vector<vector<int>> dp(nums.size() + 1, vector<int>((sum / 2) + 1, -1));
        return solve(nums, sum, 0, nums.size(), dp);
    }
};

// tabulation bottom up
class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {

        int sum = 0;
        for (auto i : nums)
            sum += i;
        if (sum % 2)
            return 0;

        vector<vector<bool>> dp(nums.size() + 1, vector<bool>((sum / 2) + 1, false));

        for (int i = 0; i <= nums.size(); ++i)
        {
            dp[i][0] = true;
        }
        for (int i = 1; i <= nums.size(); ++i)
        {
            for (int j = 1; j <= sum / 2; ++j)
            {
                if (j - nums[i - 1] >= 0)
                {
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[nums.size()][sum / 2];
    }
};