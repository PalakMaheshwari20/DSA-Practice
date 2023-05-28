#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void preOrderTraversal(Node *root,vector<int> &preOrder){
    if(root==NULL)
        return;
    preOrder.push_back(root->data);
    preOrderTraversal(root->left,preOrder);
    preOrderTraversal(root->right,preOrder);
}


int main(){
    struct Node * root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> left -> right = new Node(5);
  root -> left -> right -> left = new Node(8);
  root -> right -> left = new Node(6);
  root -> right -> right = new Node(7);
  root -> right -> right -> left = new Node(9);
  root -> right -> right -> right = new Node(10);
 
vector<int> postOrder;
preOrderTraversal(root,postOrder);

for(int i=0;i<postOrder.size();i++){
    cout << postOrder[i] << " ";
}
}