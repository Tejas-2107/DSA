bool isValid(Node *root, int min, int max)
{
    if (root == NULL)
    {
        return 1;
    }
    if (root->data < max and root->data > min)
    {
        bool left = isValid(root->left, min, root->data);
        bool right = isValid(root->right, root->data, max);
        return (left && right);
    }
    else
    {
        return false;
    }
}
bool isBST(Node *root)
{
    return isValid(root, INT_MIN, INT_MAX);
}