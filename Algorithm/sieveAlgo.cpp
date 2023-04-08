#include <bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes to print prime number from 2 to n
//Time Complexity: O(n*log(log(n)))
//Auxiliary Space: O(n)

int main() {
	// your code goes here
	int n;
    cin >> n;

    vector<bool>check(n+1, true);

    for(int i = 2; i*i <= n; i++){
        if(check[i]){
            for(int j = i*i; j<=n; j+=i){
                check[j] = false;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(check[i]) cout << i <<" ";
    }
	return 0;
}
