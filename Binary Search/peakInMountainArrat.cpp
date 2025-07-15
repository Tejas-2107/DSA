#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> arr, int start, int end)
{
    int mid = 0;

    while (start < end)
    {
        mid = (start + end) / 2;
        // on left side array before peak element (increasing array)
        if (arr[mid] < arr[mid + 1])
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
    vector<int> arr = {1, 2, 2, 3, 5, 4, 3};
    int end = arr.size() - 1;
    cout << findPeak(arr, 0, end) << endl;
    return 0;
}