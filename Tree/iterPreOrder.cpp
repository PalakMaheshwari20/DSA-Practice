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

vector<int> preOrder(Node * root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* temp = s.top();
        ans.push_back(temp->data);
        s.pop();
        if(temp->right!=NULL)
            s.push(temp->right);
        if(temp->left!=NULL)
            s.push(temp->left);
    }
    return ans;
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
 
vector<int> ans=preOrder(root);

for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
}
}