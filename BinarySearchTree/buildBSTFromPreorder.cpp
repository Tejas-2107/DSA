TreeNode *buildBSTTreeFromPreorder(int min, int max, vector<int> &preOrder, int &counter)
{
    if (counter >= preOrder.size())
    {
        return NULL;
    }
    if (preOrder[counter] < min or preOrder[counter] > max)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(preOrder[counter++]);
    root->left = buildBSTTreeFromPreorder(min, root->data, preOrder, counter);
    root->right = buildBSTTreeFromPreorder(root->data, max, preOrder, counter);

    return root;
}
TreeNode *preOrderTree(vector<int> &preOrder)
{
    // Write your code here.
    int counter = 0;
    return buildBSTTreeFromPreorder(INT_MIN, INT_MAX, preOrder, counter);
}