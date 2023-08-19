#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;
    int len1 = mid - s + 1;//leftArrayLength
    int len2 = e - mid;//rightArrayLength
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; ++i)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; ++i)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted arrays
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 and index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // left part sort
    mergeSort(arr, start, mid);

    // right part sort
    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end);
}

int main()
{
    int arr[] = {10, 1, 7, 14, 9};
    int start = 0, end = 4;
    mergeSort(arr, start, end);
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

// overall complexity = O(N log(N) in all case 
// Space complexity =  O(N)
// Not In-Plcace Algo, Stable Algo