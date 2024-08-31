int solve(TreeNode<int> *root, int k, int &counter)
{
    if (root == NULL)
    {
        return -1;
    }
    int leftAns = solve(root->left, k, counter);

    // left we got the answer
    if (leftAns != -1)
    {
        return leftAns;
    }
    // Node
    counter++;
    if (counter == k)
    {
        return root->data;
    }

    // right
    return solve(root->right, k, counter);
}

int kthSmallest(TreeNode<int> *root, int k)
{
    //  Write the code here.
    int counter = 0;
    return solve(root, k, counter);
}