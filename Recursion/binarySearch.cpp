#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int search, int left, int right){
    if(left > right){
        return false;
    }

    int mid = (right + left)/2; 

    if(arr[mid] == search){
        return true;
    }
    else if(arr[mid] > search ){
         right = mid - 1;
    }
    else{
         left = mid + 1;
    }

    bool ans = binarySearch(arr, search, left, right);

    return ans;
}

int main() {
	// your code goes here
	  int arr[6] = {1,2,3,4,5,6};
      int search = 1, left = 0, right = 5, mid = (right + left)/2;
      
      bool ans = binarySearch(arr, search, left, right);

      ans ? cout << " Element is present " << endl : cout << " Element is not present ";

	return 0;
}
>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
