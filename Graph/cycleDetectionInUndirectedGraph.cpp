#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to detect cycle in an undirected graph.
    bool isCyclic(unordered_map<int, bool> &visited, vector<int> adj[], int vertex, unordered_map<int, int> &parent)
    {
        queue<int> q;
        visited[vertex] = true;
        q.push(vertex);
        parent[vertex] = -1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for (auto i : adj[frontNode])
            {
                if (visited[i] == true and i != parent[frontNode])
                {
                    return true;
                }
                else if (visited[i] != true)
                {
                    visited[i] = true;
                    q.push(i);
                    parent[i] = frontNode;
                }
            }
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[])
    {

        // Code here
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        q for (int i = 0; i < v; ++i)
        {
            if (!visited[i])
            {
                if (isCyclic(visited, adj, i, parent))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

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
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
