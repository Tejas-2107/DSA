#include <bits/stdc++.h>
using namespace std class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inserIntoBST(Node *&root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        // insert in right part
        root->right = inserIntoBST(root->right, data);
    }
    else
    {
        // insert in left part
        root->left = inserIntoBST(root->left, d);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = inserIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);

    return 0;
}