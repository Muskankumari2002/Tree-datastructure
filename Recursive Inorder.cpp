#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int value){
       data = value;
       left= right = nullptr;
    }
};

void recursiveinorder(Node* root){
    if(root == nullptr)
    return;
    
    recursiveinorder(root->left);
    cout<<root->data;
    recursiveinorder(root->right);
    
}

int main()
{
    struct Node* root =new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    
    cout<<"recursive inorder"<<endl;
    recursiveinorder(root);
    return 0;
}#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int value){
       data = value;
       left= right = nullptr;
    }
};

void recursiveinorder(Node* root){
    if(root == nullptr)
    return;
    
    recursiveinorder(root->left);
    cout<<root->data;
    recursiveinorder(root->right);
    
}

int main()
{
    struct Node* root =new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    
    cout<<"recursive inorder"<<endl;
    recursiveinorder(root);
    return 0;
}
