// #include<bits/stdc++.h>
// using namespace std;
// int print(int n){
//    int sum = 0;
//     if(n == 1){ //base condition
//     return 1;
// } 
// return(n * print(n-1)); factorial


// }

// int main(){
//     cout << print(4) <<endl;
// }


#include<bits/stdc++.h>
using namespace std;


int  fibonaci(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }

    int fib = fibonaci(n-1) + fibonaci(n-2);

    return fib;
}

int main(){
    cout << fibonaci(6) <<endl;
}