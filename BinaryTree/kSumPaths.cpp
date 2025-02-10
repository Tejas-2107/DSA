class Solution
{
public:
    void count(Node *root, int k, int &ans, int curr, map<int, int> &m)
    {
        if (root == NULL)
            return;
        // take root
        curr += root->data;
        if (curr == k)
            ++ans;
        ans += m[curr - k];
        ++m[curr];
        count(root->left, k, ans, curr, m);
        count(root->right, k, ans, curr, m);
        --m[curr];
    }
    int sumK(Node *root, int k)
    {
        // code here
        int ans = 0, curr = 0;
        map<int, int> m;
        count(root, k, ans, curr, m);
        return ans;
    }
};