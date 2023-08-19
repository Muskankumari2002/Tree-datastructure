#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value),left(nullptr),right(nullptr)
    {}
};

void PostorderRecursive(TreeNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    
    PostorderRecursive(root->left);
    PostorderRecursive(root->right);
    cout<<root->val<<" ";
}

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout<<"Recursive postorder Traversal";
    PostorderRecursive(root);
    
    return 0;
    
}
