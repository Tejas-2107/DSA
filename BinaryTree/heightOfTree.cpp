// iterative
int height(struct Node *node)
{
    // code here
    queue<Node *> q;
    q.push(node);
    int ans = 0;
    while (!q.empty())
    {

        int size = q.size();
        struct Node *frontNode;

        while (size--)
        {

            frontNode = q.front();
            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
            q.pop();
        }
        ++ans;
    }
    return ans;
}

// recursive

int height(struct Node *node)
{
    // code here

    if (node == NULL)
    {
        return 0;
    }

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);

    int heightOfTree = max(leftHeight, rightHeight) + 1;

    return heightOfTree;
}