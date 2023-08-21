#include <bits/stdc++.h>
using namespace std;

class Node
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

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void findPredAndSucc(Node *root, Node *&pre, Node *&suc, int key)
{
    {
        // base case;
        if (root == NULL)
        {
            return;
        }

        if (root->data == key)
        {
            // the maximum value in left subtree is predecessor
            if (root->left != NULL)
            {
                Node *temp = root->left;
                while (temp->right)
                {
                    temp = temp->right;
                }
                pre = temp;
            }

            // // the minimum value in right subtree is successor
            if (root->right != NULL)
            {
                Node *temp = root->right;
                while (temp->left)
                {
                    temp = temp->left;
                }
                suc = temp;
            }
        }
        else if(root->data > key){
            findPredAndSucc(root->left, pre, suc,key);
        }
        else{
            findPredAndSucc(root->right, pre, suc,key);
        }
    }
}

Node *inserIntoBST(Node *root, int d)
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
        root->right = inserIntoBST(root->right, d);
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
    // cout << "Printing BST" << endl;
    // levelOrder(root);
    cout << endl;

    Node *pre = NULL, *suc = NULL;
    int key = 40;
    findPredAndSucc(root, pre, suc,key);

    if (pre != NULL)
    {
        cout << "Predecessor is " << pre->data << endl;
    }
    else
    {
        cout << "No Predecessor" << endl;
    }

    if (suc != NULL)
    {
        cout << "Successor is " << suc->data << endl;
    }
    else
    {
        cout << "No Successor" << endl;
    }

    return 0;
}