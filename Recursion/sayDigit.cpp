#include<bits/stdc++.h>
using namespace std;

void  printDigit(int n,string number[10]){

    //base condition
    if(n==0){
        return;
    }

    //processing
    int digit = n%10;
    n = n/10;

    //recusrsion
    printDigit(n,number);

    //printing
    cout << number[digit] <<" ";

}

int main(){

    int n;
    cin >> n;

    string number[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    printDigit(n,number);
}