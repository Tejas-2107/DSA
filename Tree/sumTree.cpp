class Solution
{
public:
    pair<bool, int> solve(Node *root, int &leftSum, int &rightSum)
    {

        if (root == NULL)
        {
            return {true, 0};
        }
        if (root->right == NULL and root->left == NULL)
        {
            return {true, root->data};
        }

        pair<bool, int> left = solve(root->left, leftSum, rightSum);
        pair<bool, int> right = solve(root->right, leftSum, rightSum);

        bool isSumEqual = left.second + ans.second == root->data;
        pair<bool, int> ans;

        if (isSumEqual and left.first and right.first)
        {
            ans.first = true;
            ans.second = 2 * root->data;
        }
        else
        {
            ans.first = false;
        }

        return ans;
    }
    bool isSumTree(Node *root)
    {
        // Your code here
        int leftSum = 0, rightSum = 0;
        pair<bool, int> ans = solve(root, leftSum, rightSum);
        return ans.first;
    }
};