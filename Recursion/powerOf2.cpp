<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int powerOF2(int n){
    if(n == 0){
        return 1;
    }

    // int smallerProbelm = powerOF2(n-1);
    // int bigProblem  = 2*smallerProbelm;

    return 2*powerOF2(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << powerOF2(n) << endl;
=======
#include<bits/stdc++.h>
using namespace std;

int powerOF2(int n){
    if(n == 0){
        return 1;
    }

    // int smallerProbelm = powerOF2(n-1);
    // int bigProblem  = 2*smallerProbelm;

    return 2*powerOF2(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << powerOF2(n) << endl;
>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
}