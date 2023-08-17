class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        // Your Code Here
        vector<int> ans;
        queue<pair<Node *, int>> q;
        map<int, int> m;
        q.push({root, 0});
        while (!q.empty())
        {
            Node *frontNode = q.front().first;
            int hd = q.front().second;
            q.pop();
            m[hd] = frontNode->data;
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