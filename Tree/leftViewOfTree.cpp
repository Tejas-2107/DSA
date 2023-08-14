void printLeftView(int level, Node* root, vector<int>&ans){
    if(root == NULL)return;
    if(ans.size() == level){
        ans.push_back(root->data);
    }
    printLeftView(level+1, root->left,ans);
    printLeftView(level+1, root->right,ans);
}

void leftView(Node *root)
{
   // Your code here
   int level = 0;
   vector<int>ans;
   printLeftView(level, root,ans);
   for(auto i:ans){
       cout << i <<" ";
   }
}
