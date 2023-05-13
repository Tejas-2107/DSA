/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int getSum(int n){
    if(n == 1){
        return 1;
    }
    
    int sum = n + getSum(n-1);
    cout << n <<" "<< sum<< endl;
    
    return sum;
}

int main()
{
   int n;
   cin >> n;
   
   int sum = getSum(n);
   
   cout << endl;
   
   cout << sum << endl;

    return 0;
}
