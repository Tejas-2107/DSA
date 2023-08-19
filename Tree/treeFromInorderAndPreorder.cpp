class Solution
{
public:
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
    Node *solve(int in[], int pre[], int n, int inorderStart, int inorderEnd, int &index)
    {

        // base case
        if (index >= n || inorderStart > inorderEnd)
        {
            return NULL;
        }

        // create rootNode
        int rootData = pre[index++];
        Node *root = new Node(rootData);

        // find possstion of rootData in inorder
        int position = getPosition(in, n, rootData);

        root->left = solve(in, pre, n, inorderStart, position - 1, index);
        root->right = solve(in, pre, n, position + 1, inorderEnd, index);

        return root;
    }
    Node *buildTree(int in[], int pre[], int n)
    {
        // Code here
        int inorderStart = 0, inorderEnd = n - 1, index = 0;
        Node *ans = solve(in, pre, n, inorderStart, inorderEnd, index);
        return ans;
    }
};