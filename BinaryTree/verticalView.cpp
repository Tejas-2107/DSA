class Solution
{
public:
    // Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {

        // HD level and vertices
        map<int, vector<int>> distance;
        // node HD level
        queue<pair<Node *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {

            Node *node = q.front().first;
            int hd = q.front().second;
            q.pop();

            distance[hd].push_back(node->data);

            if (node->left)
            {
                q.push({node->left, hd - 1});
            }
            if (node->right)
            {
                q.push({node->right, hd + 1});
            }
        }
        vector<int> ans;

        for (auto i : distance)
        {
            for (auto j : i.second)
            {
                ans.push_back(j);
            }
        }

        return ans;
    }
};
