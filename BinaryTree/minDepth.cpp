int minDepth(Node *root)
{
    // Your code here
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = INT_MAX, r = INT_MAX;

    if (root->left)
    {
        l = minDepth(root->left);
    }

    if (root->right)
    {
        r = minDepth(root->right);
    }
    // height will be minimum of left and right height +1
    return min(l, r) + 1;
}
