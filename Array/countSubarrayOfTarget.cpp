//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int> &arr, int target)
    {
        // Your code here
        map<int, int> m;
        int currSum = 0, count = 0;

        for (auto i : arr)
        {
            currSum += i;

            if (currSum == target)
            {
                ++count;
            }
            if (m.count(currSum - target))
            {
                count += m[currSum - target];
            }
            ++m[currSum];
        }
        return count;
    }
};
