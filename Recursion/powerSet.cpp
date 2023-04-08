#include <bits/stdc++.h>
using namespace std;

void getPowerSet(vector<vector<int>> &output, vector<int>ans, vector<int>arr, int index){
	
	//base case
	if(index >= arr.size()){
		output.push_back(ans);
		return;
	}

	//exclude
	getPowerSet(output, ans, arr, index+1);

	//include
	int element = arr[index];
	ans.push_back(element);
	getPowerSet(output, ans, arr, index+1);

}

int main() {
	// your code goes here

	vector<int>arr{1, 2, 3, 4, 5};
	vector<vector<int>> output;
	vector<int>ans;
	getPowerSet(output, ans, arr, 0);
	cout << endl;

	for(int i=0; i<output.size(); i++){
		for(int j=0; j<output[i].size(); i++){
			cout << output[i][j] << ' ';
		}

		cout << endl;
	}
	return 0;
}
