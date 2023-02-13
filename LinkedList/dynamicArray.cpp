// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int getsum(int *arr, int n)
// {
//   int sum=0;
//   for(int i=0; i<n; i++)
//   {
//     sum+=arr[i];
//   }
//   return sum;
// }
// int main()
// {

//   int *arr=new int[5];
//   for(int i=0; i<5; i++)
//   {
//     cin>>arr[i];
//   }
//   int sum=getsum(arr,5);
//   cout<< sum <<endl;
// }

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // deleting
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}