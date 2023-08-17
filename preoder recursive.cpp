#include<bits/stdc++.h>
using namespace std;
struct Node{//created a node of the binary tree
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val)//constructor initialize
    {
        data = val;
        left = right = nullptr;
    }
};

void recursivepreorder(Node* root)//recursive function
{
    if(root==nullptr)
    return;
    
    cout<<root->data;//print the value of the current node
    recursivepreorder(root->left);//traverse the left sub tree
    recursivepreorder(root->right);//traverse the right sub tree
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    
    cout<<" Recursive pre-order"<<endl;
    recursivepreorder(root);
    return 0;
}
