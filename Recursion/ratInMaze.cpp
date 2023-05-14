//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(int srcX, int srcY, int n, vector<vector<int>> visited, vector<vector<int>> m){
        if(srcX < n && srcX >=0 && srcY <n && srcY >=0 && visited[srcX][srcY] == 0 && m[srcX][srcY] == 1){
            return 1;
        }
        return 0;
    }
    void solve(int srcX, int srcY, string path, vector<string> &ans, vector<vector<int>> visited, int n,vector<vector<int>> m){
        
        if(srcX == n-1 && srcY == n-1){
            ans.push_back(path);
            return;
        }
        visited[srcX][srcY] = 1;
        //up
        int newX = srcX -1;
        int newY = srcY;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('U');
            solve(newX, newY, path, ans, visited, n,m);
            path.pop_back();
        }
        
        //right
        newX = srcX;
        newY = srcY + 1;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('R');
            solve(newX, newY, path, ans, visited, n,m);
            path.pop_back();
        }
        
        //down
        newX = srcX + 1;
        newY = srcY;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('D');
            solve(newX, newY, path, ans, visited, n,m);
            path.pop_back();
        }
        
        //left
        newX = srcX;
        newY = srcY - 1;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('L');
            solve(newX, newY, path, ans, visited, n,m);
            path.pop_back();
        }
        
        visited[srcX][srcY] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        if(m[0][0] == 0){
            return {};
        }
        vector<string> ans;
        string path = "";
        vector<vector<int>> visited = m;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                visited[i][j] = 0;
            }
        }
        int srcX = 0, srcY = 0;
        solve(srcX, srcY, path, ans, visited, n, m);
        return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends