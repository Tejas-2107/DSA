void inorder(vector<int> &inorderOfTree, BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(inorderOfTree, root->left);
    inorderOfTree.push_back(root->data);
    inorder(inorderOfTree, root->right);
}
bool twoSumInBST(BinaryTreeNode<int> *root, int target)
{
    // Write your code here
    vector<int> inorderOfTree;
    inorder(inorderOfTree, root);

    int start = 0, end = inorderOfTree.size() - 1;

    while (start < end)
    {
        if (inorderOfTree[start] + inorderOfTree[end] == target)
        {
            return true;
        }
        else if (inorderOfTree[start] + inorderOfTree[end] > target)
        {
            --end;
        }
        else
        {
            ++start;
        }
    }
    return false;
}