#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    vector<int>v(t);

    for(auto &i: v){
        cin >> i;
    }

    for(auto i: v) cout << i <<" ";
	 
	return 0;
}
