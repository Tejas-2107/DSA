//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int a[], long long int n, long long int k) {
    
    queue<long long>q;
    
    vector<long long>ans;
    
    for(int i=0; i<n; i++){
      if(a[i] < 0){
          q.push(i);
      }  
    }
    
    for(int i=0; i<=n-k; i++){
        if(!q.empty() && q.front()<i){
            q.pop();
        }
        
        if(q.empty() || !q.empty() && q.front() >= i+k){
            ans.push_back(0);
        }
        else {
           ans.push_back(a[q.front()]); 
        }
    }
    
    
    return ans;
                                                 
 }