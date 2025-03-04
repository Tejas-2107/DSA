#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 3, 3, 4, 5};
    int x = 31;

    //lower_bound  points to the first element that is greater than or equal to value (x).
    auto lower = lower_bound(v.begin(), v.end(), x);
    //upper_bound points to the first element that is strictly greater than value (x).
    auto upper = upper_bound(v.begin(), v.end(), x);
    cout << "Lower bound of " << x << " is at index " << lower - v.begin() << endl;
    cout << "Upper bound of " << x << " is at index " << upper - v.begin() << endl;
    return 0;
}