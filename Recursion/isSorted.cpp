<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){

//base condition
    if(size == 0 || size == 1){
        return true;
    }
//processing
    if(arr[0]  > arr[1]){
        return false;
    }

//recusrsion call
    else{
        bool ans = isSorted(arr + 1, size-1);
        return ans;
    }

}

int main() {
	// your code goes here
	
    int arr[6] = {1,32,3,4,5,6};
	
    bool ans = isSorted(arr,6);

    cout << endl ;
    ans ? cout << "Array is sorted " :  cout << "Array is not sorted ";
    cout << endl ;
	return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){

//base condition
    if(size == 0 || size == 1){
        return true;
    }
//processing
    if(arr[0]  > arr[1]){
        return false;
    }

//recusrsion call
    else{
        bool ans = isSorted(arr + 1, size-1);
        return ans;
    }

}

int main() {
	// your code goes here
	
    int arr[6] = {1,32,3,4,5,6};
	
    bool ans = isSorted(arr,6);

    cout << endl ;
    ans ? cout << "Array is sorted " :  cout << "Array is not sorted ";
    cout << endl ;
	return 0;
}
>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
