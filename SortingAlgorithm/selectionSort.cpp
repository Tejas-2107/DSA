#include <bits/stdc++.h>
using namespace std;
void selectionSort(int *arr, int size)
{
    int n = size;
    for (int i = 0; i < n-1; ++i)
    {
        int minIndex = i;
        for (int j = i+1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[] = {10, 1, 7, 14, 9};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

//overall complexity = O(N) * O(N) = O(N*N) = O(N2)
//Space complexity =  O(1)
//In-Plcace Algo, Not a Stable