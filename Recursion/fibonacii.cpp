#include<bits/stdc++.h>
using namespace std;

int  fibonacii(int n){
    if(n==0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    int fibonaciiResult1 = fibonacii(n-1);
    int fibonaciiResult2 = fibonacii(n-2);

    int nthTerm = fibonaciiResult1 + fibonaciiResult2;

    return nthTerm;
    
}

int main(){
    
    cout << "Enter nth term to findout" <<endl;

    int n;
    cin >> n;

    cout << fibonacii(n) << endl;
}