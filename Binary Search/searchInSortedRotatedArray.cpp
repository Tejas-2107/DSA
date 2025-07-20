#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> arr, int start, int end)
{
    int mid = 0;

    while (start < end)
    {
        mid = (start + end) / 2;
        // check if mid is on the first part that is 3,4,5 in this array
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
int binarySearch(vector<int> arr, int target, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// using single binary search

int findTarget(int start, int end, vector<int> arr,int key)
{
    int mid = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;
        cout << start << " " << end << endl;
        if (arr[mid] == key)
            return mid;
        // mid is present on left soreted part
        if (arr[mid] >= arr[start])
        {
            if (key >= arr[start] and key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        //mid is present on right side part
        else
        {
            if (key > arr[mid] and key <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 0, 1, 2};
    int end = arr.size() - 1, target = 1;
   // int peak = findPeak(arr, 0, end);
    cout << findTarget(0,end,arr,target) << endl;
    // if (target >= arr[peak] and target <= arr[end])
    // {
    //     cout << binarySearch(arr, target, peak, end) << endl;
    // }
    // else
    // {
    //     cout << binarySearch(arr, target, 0, peak - 1) << endl;
    // }
    return 0;
}