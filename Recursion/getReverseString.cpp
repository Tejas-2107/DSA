<<<<<<< HEAD
//using two pointer
#include <bits/stdc++.h>
using namespace std;

void getReverse(string& s, int i, int j){
    
    cout << s <<" ";
    //base case
    if(i > j){
        return ;
    }
    
    //processing
    swap(s[i],s[j]);
    ++i;
    --j;

    //recursive call
     getReverse(s,i,j);

}

int main() {
	// your code goes here

    string s = "tejas";
    int i =0, j =4;
    getReverse(s,i,j);
 
    cout << endl;

    cout << s << endl;
}


=======
using two pointer
#include <bits/stdc++.h>
using namespace std;

void getReverse(string& s, int i, int j){
    
    cout << s <<" ";
    //base case
    if(i > j){
        return ;
    }
    
    //processing
    swap(s[i],s[j]);
    ++i;
    --j;

    //recursive call
     getReverse(s,i,j);

}

int main() {
	// your code goes here

    string s = "tejas";
    int i =0, j =4;
    getReverse(s,i,j);
 
    cout << endl;

    cout << s << endl;
}


>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
 