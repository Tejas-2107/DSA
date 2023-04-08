<<<<<<< HEAD
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string a){
		    // Code here
		    
		    string ans = "";
		    unordered_map<char,int>m;
		    queue<char>q;
		    
		    for(int i=0; i<a.length(); i++){
		        m[a[i]]++;
		        q.push(a[i]);
		        
		        while(!q.empty()){
		            if(m[q.front()] > 1){
		                q.pop();
		            }
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        
		        if(q.empty()){
		           ans.push_back('#');
		        }
		    }
		    
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
=======
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string a){
		    // Code here
		    
		    string ans = "";
		    unordered_map<char,int>m;
		    queue<char>q;
		    
		    for(int i=0; i<a.length(); i++){
		        m[a[i]]++;
		        q.push(a[i]);
		        
		        while(!q.empty()){
		            if(m[q.front()] > 1){
		                q.pop();
		            }
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        
		        if(q.empty()){
		           ans.push_back('#');
		        }
		    }
		    
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
>>>>>>> 831773f80b26d35d97d542de41d8c4f42958983a
}  // } Driver Code Ends