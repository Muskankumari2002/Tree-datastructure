#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value): val(value),left(nullptr),right(nullptr){}
    
};

void postorderIterative(TreeNode* root){
    if(root == nullptr)
    {
        return;
    }
    
    stack<TreeNode*>s1,s2 ;
    s1.push(root);
    while(!s1.empty())
    {
        TreeNode* current = s1.top();
        s1.pop();
        s2.push(current);
        
        if(current->left){
            s1.push(current->left);
            
        }
        if(current->right)
        {
            s1.push(current->right);
        }
}
cout<<"Iterative postorder Traversal";
while(!s2.empty())
{
    cout<<s2.top()->val<<" ";
    s2.pop();
    
}
cout<<endl;
}


int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    postorderIterative(root);
    return 0;
}
