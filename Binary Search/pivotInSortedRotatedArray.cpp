#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> arr, int start, int end)
{
    int mid = 0;

    while (start < end)
    {
        mid = (start + end) / 2;
        // check if mid is on the first part that is 3,5,7 in this array
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    vector<int> arr = {3,5,7,0,1,2};
    int end = arr.size() - 1;
    cout << findPeak(arr, 0, end) << endl;
    return 0;
}