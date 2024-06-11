class Solution
{
public:
    // Function to detect cycle in a directed graph.
    bool checkCycle(unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, int node, vector<int> adj[])
    {

        visited[node] = true;
        dfsVisited[node] = true;

        for (auto i : adj[node])
        {
            if (visited[i] and dfsVisited[i] || !visited[i] and checkCycle(visited, dfsVisited, i, adj))
            {
                return true;
            }
        }

        dfsVisited[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVisited;

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                if (checkCycle(visited, dfsVisited, i, adj))
                {
                    return true;
                }
            }
        }
        return false;
    }
};