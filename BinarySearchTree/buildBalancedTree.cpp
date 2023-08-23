void inorder(vector<int> &inorderOfTree, Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(inorderOfTree, root->left);
    inorderOfTree.push_back(root->data);
    inorder(inorderOfTree, root->right);
}

Node *balancedBST(vector<int> inorderOfTree, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;
    Node *root = new Node(inorderOfTree[mid]);
    root->left = balancedBST(inorderOfTree, start, mid - 1);
    root->right = balancedBST(inorderOfTree, mid + 1, end);

    return root;
}

Node *buildBalancedTree(Node *root)
{
    // Code here
    vector<int> inorderOfTree;
    inorder(inorderOfTree, root);
    int start = 0, end = inorderOfTree.size() - 1;
    return balancedBST(inorderOfTree, start, end);
}