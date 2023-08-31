vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    queue<Node *> q;
    stack<Node *> s;

    q.push(root);

    while (!q.empty())
    {
        Node *frontNode = q.front();
        q.pop();
        s.push(frontNode);

        if (frontNode->right)
        {
            q.push(frontNode->right);
        }
        if (frontNode->left)
        {
            q.push(frontNode->left);
        }
    }

    while (!s.empty())
    {
        ans.push_back(s.top()->data);
        s.pop();
    }

    return ans;
}