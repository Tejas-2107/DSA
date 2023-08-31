vector<int> levelOrder(Node *node)
{
    // Your code here
    vector<int> ans;
    queue<Node *> q;
    q.push(node);

    while (!q.empty())
    {

        Node *frontNode = q.front();
        q.pop();

        if (frontNode->left)
        {
            q.push(frontNode->left);
        }
        if (frontNode->right)
        {
            q.push(frontNode->right);
        }
        ans.push_back(frontNode->data);
    }
    return ans;
}