#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int size){

    //base case
    if(size == 0){
        return 0;
    }

    //processing and recusrsion call
    int sum = arr[0] + getSum(arr+1, size-1);

    return sum;
}

int main() {
	// your code goes here
	  int arr[6] = {1,1,1,1,1,1};

      int sum = getSum(arr,6);

      cout << endl;

      cout << sum << endl << endl;

	
	return 0;
}
