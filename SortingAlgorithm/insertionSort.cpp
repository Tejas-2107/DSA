#include <bits/stdc++.h>
using namespace std;
void insertionSot(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {10, 1, 7, 14, 9};
    insertionSot(arr, 5);
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

// overall complexity = O(N) * O(N) = O(N*N) = O(N2)
//Best case O(N) if already sorted
// Space complexity =  O(1)
// In-Plcace Algo,  Stable Algo
