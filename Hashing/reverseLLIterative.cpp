#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int x) {
        data=x;
    }

};
Node *head;

// Node* createNewNode(){
//     Node *node = new Node();
//     cout<<"Enter node data";
//     cin>>node->data;
//     node->next = NULL;
//     return node;
// }

// Node* getLastNode(){
//     Node *temp = head;
//     while(temp->next!=NULL) {
//         temp=temp->next;
//     }
//     return temp;
// }
// void insertNodeAtEnd()
// {
//     Node *newNode = createNewNode();  
//     //insert new node  
//     if (head==NULL) {
//         head = newNode;
//     }
//     else{
//         Node *lastNode = NULL;
//         lastNode = getLastNode();
//         lastNode->next=newNode;
//      }
// }

void display(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

//TC: O(N) SC: O(1)
Node * reverseLl(Node* head){
    Node* newhead=NULL;
    while(head!=NULL){
        Node* next = head->next;
        head->next=newhead;
        newhead=head;
        head=next;
    }
    return newhead;
}

int main() {
    
    // int n;
    // cout<<"Enter number of nodes of linked list: ";
    // cin>>n;
    // cout<<"Enter nodes of linked list: \n ";
    //  Node *res=head;
    // for(int i=0;i<n;i++) {
    //     insertNodeAtEnd();
    // }
    Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	display(head);
    Node* h = reverseLl(head);
    display(h);
}