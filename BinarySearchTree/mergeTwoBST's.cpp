//gfg
void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
vector<int> mergeArrays(vector<int> bst1, vector<int> bst2)
{
    int i = 0, j = 0;
    int counter = 0;
    vector<int> ans;
    while (i < bst1.size() and j < bst2.size())
    {

        if (bst1[i] < bst2[j])
        {
            ans.push_back(bst1[i++]);
        }
        else
        {
            ans.push_back(bst2[j++]);
        }
    }

    while (i < bst1.size())
    {
        ans.push_back(bst1[i++]);
    }

    while (j < bst2.size())
    {
        ans.push_back(bst2[j++]);
    }
    return ans;
}
vector<int> merge(Node *root1, Node *root2)
{
    // Your code here
    vector<int> bst1;
    vector<int> bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    vector<int> mergeArray = mergeArrays(bst1, bst2);

    return mergeArray;
}

//using linkedlist TC:o(n + m) SC:o(h1 + h2)

