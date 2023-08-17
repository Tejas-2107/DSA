void solve(Node *root, int &k, int node, vector<int> &path, int &ans)
{

    if (root == NULL)
        return;
    path.push_back(root->data);

    solve(root->left, k, node, path, ans);
    solve(root->right, k, node, path, ans);

    if (root->data == node)
    {
        int count = 0;
        for (int i = path.size() - 1; i >= 0; --i)
        {
            // cout << path[i] << endl;
            if (count == k)
            {
                ans = path[i];
                return;
            }
            ++count;
        }
    }

    path.pop_back();
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    vector<int> path;
    int ans = -1;
    solve(root, k, node, path, ans);
    return ans;
}