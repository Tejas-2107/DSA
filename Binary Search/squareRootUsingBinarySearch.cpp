
#include <bits/stdc++.h>
using namespace std;

long long integerSqaureRoot(int n)
{
    int start = 0, end = n;
    long long mid = 0, ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        long long square = mid * mid;

        if (square == n)
            return mid;
        else if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
double uptoKdecimal(int integerRoot, int k, int n)
{
    double toBeAdd = 1, ans = integerRoot;
    for (int i = 0; i < k; ++i)
    {
        toBeAdd /= 10;
        for (double j = ans; j * j < n; j += toBeAdd)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int k = 3;
    int integerRoot = integerSqaureRoot(n);
    cout << integerRoot << endl;

    cout << uptoKdecimal(integerRoot, k, n) << endl;
}