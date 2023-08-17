#include<bits/stdc++.h>
using namespace std;

struct Node {//created a node for the binary tree it contain integer dat, and two pointers left and right
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){//constructor initilizes the dat and set left right pointetr to null
        data = val;
        left = right = NULL;
    }
};

void iterativePreorder(Node* root){//function 
    if(root == nullptr)//root is null means empty tree then return
    return;
    
    stack<Node*> nodestack;// created a stack to hold nodes
    nodestack.push(root);//pushed the root node in stack
    
    while(!nodestack.empty())//it continues as long as the stack is not empty
    {
        Node* currNode = nodestack.top();//top node from the stack that is currnode is removed
        nodestack.pop();
        
        cout<<currNode->data<<" ";print the top node
        
        if(currNode->right)
        nodestack.push(currNode->right);
        
        if(currNode->left)
        nodestack.push(currNode->left);
    }
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->right->left = new
    
    cout<<"Iterative pre order"<<endl;
    
    iterativePreorder(root);
   
    
    return 0;
}
