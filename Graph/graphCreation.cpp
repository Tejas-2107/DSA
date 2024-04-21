#include <bits/stdc++.h>
using namespace std;

class Graph
{
    unordered_map<int, list<int>> adj;

public:
    void createEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << endl;
    int m;
    cout << "Enter the number of edges: ";
    cin >> m;
    cout << endl;

    Graph G;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        G.createEdge(u, v, 0);
    }

    G.printAdjList();
}