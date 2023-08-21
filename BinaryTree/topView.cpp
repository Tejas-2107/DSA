/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // Your code here
        vector<int> ans;
        queue<pair<Node *, int>> q;
        map<int, int> m;
        q.push({root, 0});
        while (!q.empty())
        {
            Node *frontNode = q.front().first;
            int hd = q.front().second;
            q.pop();
            if (m.find(hd) == m.end())
            {
                m[hd] = frontNode->data;
            }
            if (frontNode->left)
            {
                q.push({frontNode->left, hd - 1});
            }
            if (frontNode->right)
            {
                q.push({frontNode->right, hd + 1});
            }
        }

        for (auto i : m)
        {
            ans.push_back(i.second);
        }

        return ans;
    }
};
