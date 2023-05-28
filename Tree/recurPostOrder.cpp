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

//Tc: O(N) SC: O(N)
void postOrderTraversal(Node *root, vector<int> &postOrder){
    if(root==NULL)
        return;
    postOrderTraversal(root->left,postOrder);
    postOrderTraversal(root->right,postOrder);
    postOrder.push_back(root->data);
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
postOrderTraversal(root,postOrder);

for(int i=0;i<postOrder.size();i++){
    cout << postOrder[i] << " ";
}

}