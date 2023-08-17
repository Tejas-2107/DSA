#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr, int size)
{
    int n = size;
    bool isSwapping = false;
    for (int i = 0; i < n; ++i)
    {
        int minIndex = i;
        for (int j = i; j < n - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapping = true;
            }
        }
        if (!isSwapping)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {10, 1, 7, 14, 9};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

// Best case complexity = O(N) if already sorted
// Worst and average complextiy = O(N^2)
// Space complexity =  O(1)
// In-Plcace Algo