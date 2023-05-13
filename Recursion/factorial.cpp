#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    int smallerProbelm = factorial(n-1);
    int bigProblem  = n*smallerProbelm;

    return bigProblem;
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}
