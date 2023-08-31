int height(Node *root, int &diamterOfTree)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left, diamterOfTree);
    int rightHeight = height(root->right, diamterOfTree);

    // diameter is height of leftsubtree + rightsubtree + root that's why adding 1
    diamterOfTree = max(diamterOfTree, leftHeight + rightHeight + 1);

    return 1 + max(leftHeight, rightHeight);
}
int diameter(Node *root)
{
    // Your code here
    int diamterOfTree = INT_MIN;
    height(root, diamterOfTree);
    return diamterOfTree;
}