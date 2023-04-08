#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s ="I am a  Developer and coder";

    stringstream ss(s);
    string seprate;

    cout << endl;

    while(ss >> seprate){
        cout << seprate ;
        cout << endl;
    } 
	return 0;
}
