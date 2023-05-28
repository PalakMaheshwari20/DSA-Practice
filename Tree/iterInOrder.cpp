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

vector<int> inOrder(Node * root){
    vector<int> ans;
    stack<Node *> st;
    Node* temp=root;
    while(true){
        if(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
        else{
            if(st.empty()==true)
                break;
            temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            temp=temp->right;
        }
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
 
vector<int> ans=inOrder(root);

for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
}
}