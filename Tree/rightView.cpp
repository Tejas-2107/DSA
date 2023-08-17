

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// Function to return a list containing elements of left view of the binary tree.
void solution(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (ans.size() == level)
    {
        ans.push_back(root->data);
    }

    solution(root->right, ans, level + 1);
    solution(root->left, ans, level + 1);
    
}
vector<int> leftView(Node *root)
{
    // Your code here
    if (root == NULL)
        return {};
    vector<int> ans;
    // ans.push_back(root->data);
    solution(root, ans, 0);
    return ans;
}