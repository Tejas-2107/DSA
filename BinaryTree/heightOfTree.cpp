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

// iterative using level order

int height(struct Node *node)
{
    int ans = 0;
    queue<Node *> q;
    q.push(node);
    q.push(NULL);

    while (!q.empty())
    {

        Node *frontNode = q.front();
        q.pop();

        if (frontNode == NULL)
        {
            ++ans;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }
    }
    return ans;
}