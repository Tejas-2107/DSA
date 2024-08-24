//Minimum sum partitionGiven an array arr of size n containing non-negative integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference

//top down approach ,recursion + memoization
class Solution{

  public:
    int topDown(int *arr,int n,vector<vector<int>>&dp,int sum,int currSum,int index){
        
        if(index == n){
            return abs(sum-2*currSum);
        }
        
        if(dp[index][currSum] != -1)return dp[index][currSum];
        
        //takeit
        int take=topDown(arr,n,dp,sum,currSum+arr[index],index+1);
        int notTake=topDown(arr,n,dp,sum,currSum,index+1);
        
        return dp[index][currSum] = min(take,notTake);
        
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0; i<n; ++i)sum += arr[i];
	    
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    
	    return topDown(arr,n,dp,sum,0,0);
	} 
};
