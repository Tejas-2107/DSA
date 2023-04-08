#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int search){
    if(size == 0){
        return false;
    }

    if(arr[0] == search){
        return true;
    }

    bool ans = linearSearch(arr+1,size-1,search);

    return ans;
}

int main() {
	// your code goes here
	  int arr[6] = {1,32,3,4,5,6};
      int search = 5;

      bool ans = linearSearch(arr,6,search);

      ans ? cout << " Element is present " << endl : cout << " Element is not present ";

	return 0;
}
