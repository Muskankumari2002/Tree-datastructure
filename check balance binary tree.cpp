#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val): data(val),left(nullptr),right(nullptr){}
};

int height(Node* root)
{
    if(root==nullptr)
    return 0;
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    max(leftHeight,rightHeight)+1;

    
}

bool isbalanced(Node* root)
{
    if(root == nullptr)
    return true;
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    if(abs(leftHeight-rightHeight)<=1 && isbalanced(root->left) && isbalanced(root->right))
    {
        return true;
    }
    
    return false;
}

int main()
{
Node* a = new Node(1);
a->left = new Node(2);
a->right = new Node(3);
a->left->left = new Node(4);
a->left->right = new Node(5);

Node* b = new Node(1);
b->left= new Node(2);
b->left->left = new Node(3);

cout<<"Balanced tree"<<(isbalanced(a)?"yes":"No")<<endl;
cout<<"Balanced Tree"<<(isbalanced(b)?"yes":"No")<<endl;
return 0;
}
