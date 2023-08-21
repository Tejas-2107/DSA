Node *createParentMapping(map<Node *, Node *> &nodeToParent, Node *root, int target)
{

    queue<Node *> q;
    q.push(root);
    Node *targetNode = NULL;

    while (!q.empty())
    {

        Node *frontNode = q.front();
        q.pop();

        if (frontNode->left)
        {
            nodeToParent[frontNode->left] = frontNode;
            q.push(frontNode->left);
        }
        if (frontNode->right)
        {
            nodeToParent[frontNode->right] = frontNode;
            q.push(frontNode->right);
        }
        if (frontNode->data == target)
        {
            targetNode = frontNode;
        }
    }
    return targetNode;
}

void burnTree(Node *targetNode, map<Node *, Node *> &nodeToParent, int &ans)
{

    map<Node *, bool> visited;
    queue<Node *> q;
    q.push(targetNode);
    visited[targetNode] = true;

    while (!q.empty())
    {

        int size = q.size();
        bool isInsertion = false;
        for (int i = 0; i < size; ++i)
        {

            Node *frontNode = q.front();
            q.pop();

            if (frontNode->left and !visited[frontNode->left])
            {
                visited[frontNode->left] = true;
                isInsertion = true;
                q.push(frontNode->left);
            }

            if (frontNode->right and !visited[frontNode->right])
            {
                visited[frontNode->right] = true;
                isInsertion = true;
                q.push(frontNode->right);
            }

            if (nodeToParent[frontNode] and !visited[nodeToParent[frontNode]])
            {
                isInsertion = true;
                visited[nodeToParent[frontNode]] = true;
                q.push(nodeToParent[frontNode]);
            }
        }
        if (isInsertion)
        {
            ++ans;
        }
    }
}

int minTime(Node *root, int target)
{
    // Your code goes here
    int ans = 0;
    map<Node *, Node *> nodeToParent;
    nodeToParent[root] = NULL;
    Node *targetNode = createParentMapping(nodeToParent, root, target);
    burnTree(targetNode, nodeToParent, ans);
    return ans;
}