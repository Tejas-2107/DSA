#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";

    vector<string> ans;
    int numOfSubsequences = pow(2, s.length()) - 1;

    for (int i = 1; i <= numOfSubsequences; i++)
    {
        int x = i;
        int j = 0;
        string temp = "";

        while (x)
        {
            if (x & 1)
            {
                temp += s[j];
            }
            ++j;
            x = x>>1;
        }
        cout << temp <<' '; 
    }

    // for (auto i : ans)
    // {
    //     cout << i << ' ';
    // }

    return 0;
}
