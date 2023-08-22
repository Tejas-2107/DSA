int solve(Node *root, int k, int &counter)
{
    if (root == NULL)
    {
        return -1;
    }

    int rightAns = solve(root->right, k, counter);

    if (rightAns != -1)
    {
        return rightAns;
    }

    ++counter;
    if (counter == k)
    {
        return root->data;
    }

    return solve(root->left, k, counter);
}
int kthLargest(Node *root, int k)
{
    // Your code here
    int counter = 0;
    return solve(root, k, counter);
}