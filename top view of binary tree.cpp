#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val): data(val),left(nullptr),right(nullptr) {}
};

void printTopView(Node* root){// function to print top view 
    if(!root)
    return;
    map<int,int> topviewmap;// create a map to store the horizontal distance and corresponding vang node vval
    queue<pair<Node*, int>> q;// queure for level order traversal
    q.push({root,0});//start at horizontal distance 0;
    
    while(!q.empty()){//loop that continue until q become empty
        Node* current = q.front().first;//first element in the wueue
        int hd = q.front().second;//horizontal distance of current node from the root of the tree
        q.pop();//remove the front element from the queue
        
        if(topviewmap.find(hd) == topviewmap.end()){//if the horizontal distance is not in the map, ad it.
            topviewmap[hd]= current->data;
        }
        
        if(current->left){//enqueue the left and right children with updated horizontal distances
            q.push({current->left, hd - 1});
        }
        if(current->right){
            q.push({current->right, hd + 1});
        }
    }
    
    for(const auto& pair : topviewmap){// print the top view in order of horizontal distances
        cout<<pair.second<<" ";
    }
    cout<<endl;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->right->right = new Node(5);
    root->left->right->right->right = new Node(6);
    
    cout<<" top view of binary tree:";
    printTopView(root);
    return 0;
}
