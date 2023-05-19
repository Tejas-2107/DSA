//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool bfs(int a, int b, vector<int> &color, vector<int> graph[])
    {
        queue<int> q;
        q.push(b);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto edge : graph[node])
            {
                if (color[edge] == -1)
                {
                    color[edge] = !color[node];
                    q.push(edge);
                }
                else if (color[edge] == color[node])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    bool isBipartite(int V, vector<int> adj[])
    {

        vector<int> isColor(V, -1);
        for (int i = 0; i < V; ++i)
        {
            if (!bfs(0, i, isColor, adj))
            {
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends