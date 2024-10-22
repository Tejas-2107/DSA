// Function to check whether there is a subarray present with 0-sum or not.
bool subArrayExists(vector<int> arr)
{
    // Your code here
    map<int, int> m;
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
        if (sum==0 or m.count(sum))
        {
            return true;
        }
        ++m[sum];
    }
    return false;
}