
#include <bits/stdc++.h>
using namespace std;

int firstIndex(vector<int> arr, int start, int end, int num)
{
    int mid = (start + end) / 2,ans=-1;

    while (start <= end)
    {
        if (arr[mid] == num)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastIndex(vector<int> arr, int start, int end, int num)
{
    int mid = (start + end) / 2,ans=-1;

    while (start <= end)
    {
        if (arr[mid] == num)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4};

    int mid = 0, start = 0, end = arr.size() - 1, num = 5;

    cout << firstIndex(arr, start, end, num) << endl;
    cout << lastIndex(arr, start, end, num) << endl;
}