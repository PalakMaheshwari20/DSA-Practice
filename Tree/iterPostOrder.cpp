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

vector<int> postOrder(Node * root){
    vector<int> ans;
    if(root==NULL)
        return ans;
    stack<Node *> st1,st2;
    st1.push(root);
    Node* temp=root;
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL)
            st1.push(root->left);
        if(root->right!=NULL)
            st1.push(root->right);
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->data);
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
 
vector<int> ans=postOrder(root);

for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
}
}