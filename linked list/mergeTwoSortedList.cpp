#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node() {

    }
    Node(int x) {
        data=x;
    }

};
Node *head;

Node* createNewNode(){
    Node *node = new Node();
    cout<<"Enter node data";
    cin>>node->data;
    node->next = NULL;
    return node;
}

Node* getLastNode(){
    Node *temp = head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    return temp;
}
void insertNodeAtEnd()
{
    Node *newNode = createNewNode();  
    //insert new node  
    if (head==NULL) {
        head = newNode;
    }
    else{
        Node *lastNode = NULL;
        lastNode = getLastNode();
        lastNode->next=newNode;
     }
}

void display(Node * head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

//TC: O(N1+N2) SC: O(1)
Node* mergeSortedList(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    if(a->data > b->data)
        swap(a,b);
    Node* res =a;
    while(a!=NULL && b!=NULL){
        Node* temp=NULL;
        while(a!=NULL && a->data <= b->data)
        {
            temp=a;
            a=a->next;
        }
        temp->next=b;
        swap(a,b);
    }
    return res;
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
    Node *a=new Node(10);
	a->next=new Node(20);
	a->next->next=new Node(30);
	Node *b=new Node(5);
	b->next=new Node(35);
    b->next->next=new Node(40);
    display(mergeSortedList(a,b));
}