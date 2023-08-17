 Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root == NULL){
            return NULL;
        }
        if(root->data == n1){
            return root;
        }
        if(root->data == n2){
            return root;
        }
        Node* left = solve(root->left, n1, n2);
        Node* right = solve(root->right, n1, n2);
        if(left == NULL and right == NULL){
            return  NULL;
        }
        if(right == NULL and left != NULL)return left;
        if(right != NULL and left == NULL)return right;
        if(left->data ==n1 and right->data == n2 || left->data == n2 and right->data == n1){
            return root;
        }
    }