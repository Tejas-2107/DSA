//circular houses

class Solution
{
public:
    int solve(int start, int end, vector<int> &nums)
    {
        int prev1 = 0, prev2 = nums[start];

        for (int i = start + 1; i < end; ++i)
        {
            int ans = max(prev1 + nums[i], prev2);
            prev1 = prev2;
            prev2 = ans;
        }

        return prev2;
    }
    int rob(vector<int> &nums)
    {

        int n = nums.size();

        if (n == 1)
        {
            return nums[0];
        }

        return max(solve(0, n - 1, nums), solve(1, n, nums));
    }
};