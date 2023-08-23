void inorder(vector<int> &inorderOfTree, TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(inorderOfTree, root->left);
    inorderOfTree.push_back(root->data);
    inorder(inorderOfTree, root->right);
}
TreeNode<int> *flatten(TreeNode<int> *root)
{
    // Write your code here
    vector<int> inorderOfTree;
    inorder(inorderOfTree, root);
    TreeNode<int> *ans = new TreeNode<int>(inorderOfTree[0]);
    TreeNode<int> *curr = ans;
    int len = inorderOfTree.size();

    for (int i = 1; i < len; ++i)
    {
        TreeNode<int> *temp = new TreeNode<int>(inorderOfTree[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;

    return ans;
}