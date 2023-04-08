<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

long long power(int a, int b){
    
    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main() {
	// your code goes here
	int a, b;
    cin >> a >> b;

    long long ans = power(a, b);

    cout << ans << endl;
	return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

long long power(int a, int b){
    
    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main() {
	// your code goes here
	int a, b;
    cin >> a >> b;

    long long ans = power(a, b);

    cout << ans << endl;
	return 0;
}
>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
