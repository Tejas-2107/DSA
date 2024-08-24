// //You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target
// we can solve it by using is partion with given differnce -2 + 3 -1 +1 = (3+1)-(2+1)

class Solution
{
public:
    int topDown(vector<int> &nums, int target, vector<vector<int>> &dp, int currSum, int index)
    {

        if (index == nums.size())
        {
            return currSum == target;
        }

        if (dp[index][currSum] != -1)
            return dp[index][currSum];

        // takeit
        int take = 0;
        if (target >= nums[index])
        {
            take = topDown(nums, target, dp, currSum + nums[index], index + 1);
        }

        int notTake = topDown(nums, target, dp, currSum, index + 1);

        return dp[index][currSum] = take + notTake;
    }
    int findTargetSumWays(vector<int> &nums, int d)
    {
        int sum = 0;
        for (auto i : nums)
            sum += i;
        if (sum - d < 0 || (sum - d) % 2)
            return 0;
        vector<vector<int>> dp(nums.size() + 1, vector<int>(sum + 1, -1));
        return topDown(nums, (sum - d) / 2, dp, 0, 0);
    }
};