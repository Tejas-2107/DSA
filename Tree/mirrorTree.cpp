void mirror(Node *root)
{
    // code here
    if (root == NULL)
    {
        return;
    }

    Node *rightNode = root->right;
    root->right = root->left;
    root->left = rightNode;
    mirror(root->left);
    mirror(root->right);
}