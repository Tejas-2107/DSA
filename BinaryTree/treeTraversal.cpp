vector<int> postorderTraversal(TreeNode *root)
{

    stack<TreeNode *> s;
    if (root)
        s.push(root);
    vector<int> postorder;
    while (!s.empty())
    {
        TreeNode *top = s.top();
        s.pop();
        postorder.push_back(top->val);
        if (top->left)
        {
            s.push(top->left);
        }
        if (top->right)
        {
            s.push(top->right);
        }
    }
    reverse(postorder.begin(), postorder.end());

    return postorder;
}

vector<int> inorderTraversal(TreeNode *root)
{

    vector<int> res;
    stack<TreeNode *> stack;
    TreeNode *curr = root;

    while (curr != NULL || !stack.empty())
    {
        while (curr != NULL)
        {
            stack.push(curr);
            curr = curr->left;
        }
        curr = stack.top();
        stack.pop();
        res.push_back(curr->val);
        curr = curr->right;
    }
    return res;
}

vector<int> preorderTraversal(TreeNode *root)
{
    if (!root)
        return {};

    stack<TreeNode *> s;
    vector<int> postorder;
    s.push(root);
    while (!s.empty())
    {
        TreeNode *top = s.top();
        s.pop();
        postorder.push_back(top->val);
        if (top->right)
        {
            s.push(top->right);
        }
        if (top->left)
        {
            s.push(top->left);
        }
    }
    return postorder;
}