int checkHeihgt(Node *root)
{
    if (root == NULL)
        return 0;
    int leftH = checkHeihgt(root->left);
    if (leftH == -1)
        return -1;
    int rightH = checkHeihgt(root->right);
    if (rightH == -1)
        return -1;
    if (abs(leftH - rightH) > 1)
        return -1;
    return max(leftH, rightH) + 1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    return checkHeihgt(root) != -1;
}