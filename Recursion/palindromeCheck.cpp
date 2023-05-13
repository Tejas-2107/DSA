#include <bits/stdc++.h>
using namespace std;

bool check(string s, int i, int j)
{
    //base case
    if (i > j)
    {
        return true;
    }

    if (s[i] != s[j])
    {
        return false;
    }
    
    //recursion call
    bool ans = check(s, ++i, --j);

    return ans;
}

int main()
{
    // your code goes here

    string x = "tejas";
    bool ans = check(x, 0, 3);

    ans ? cout << "Yes, palidrome" : cout << "Not, Palindrome";

    return 0;
}
