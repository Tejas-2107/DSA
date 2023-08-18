vector<int> verticalOrder(Node *root)
{

    // HD level and vertices
    map<int, map<int, vector<int>>> distance;
    // node HD level
    queue<pair<Node *, pair<int, int>>> q;
    q.push({root, {0, 0}});

    while (!q.empty())
    {

        Node *node = q.front().first;
        int hd = q.front().second.first;
        int level = q.front().second.second;
        q.pop();

        distance[hd][level].push_back(node->data);

        if (node->left)
        {
            q.push({node->left, {hd - 1, level + 1}});
        }
        if (node->right)
        {
            q.push({node->right, {hd + 1, level + 1}});
        }
    }
    vector<int> ans;

    for (auto i : distance)
    {
        for (auto j : i.second)
        {
            for (auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }

    return ans;
}
}
;
