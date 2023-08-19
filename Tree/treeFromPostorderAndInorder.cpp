int getPosition(int in[], int n, int rootData)
{
    for (int i = 0; i < n; ++i)
    {
        if (in[i] == rootData)
        {
            return i;
        }
    }
    return -1;
}
Node *solve(int in[], int post[], int n, int inorderStart, int inorderEnd, int &index)
{

    // base case
    if (index < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // create rootNode
    int rootData = post[index--];
    Node *root = new Node(rootData);

    // find possstion of rootData in inorder
    int position = getPosition(in, n, rootData);

    root->right = solve(in, post, n, position + 1, inorderEnd, index);
    root->left = solve(in, post, n, inorderStart, position - 1, index);

    return root;
}
Node *buildTree(int in[], int post[], int n)
{
    // Code here
    int postorderStart = n - 1, inorderStart = 0, inorderEnd = n - 1;
    Node *ans = solve(in, post, n, inorderStart, inorderEnd, postorderStart);
    return ans;
}