// return the maximum length of the subarray
// with equal 0s and 1s
class Solution
{
public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        int ans = 0, one = 0, zero = 0;
        map<int, int> m;
        m[0] = -1;
        for (int i = 0; i < N; ++i)
        {
            if (arr[i])
                ++one;
            else
                ++zero;
            if (m.count(one - zero))
            {
                ans = max(i - m[one - zero], ans);
            }
            else
            {
                m[one - zero] = i;
            }
        }
        return ans;
    }
};