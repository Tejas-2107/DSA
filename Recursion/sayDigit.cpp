<<<<<<< HEAD
#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
=======
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
>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
}