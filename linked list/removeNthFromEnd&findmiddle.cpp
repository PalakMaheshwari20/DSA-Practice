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

void findMiddle() {
    if(head==NULL) {
        return;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL) {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}


void display()
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

//Naive approach: First traverse the whole ll counting the number of nodes.In next traversal move till Count - N nodes and then node->next=node->next->next
//TC: O(2N) SC: O(1)

//Efficient approach: slow and fast pointer here in this case we will be traversing fast pointer till N nodes then we'll begin with slow pointer and along with move fast pointer and move till the the fast reaches the NULL
void delNthNode(Node* head, int N){
    Node* temp=new Node(0);
    temp->next=head;
    Node* fast=temp;
    Node* slow=temp;

    for(int i=1;i<=N;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    
    //After the above loop now slow is standing at the node just before the node to be deleted
    slow->next=slow->next->next;
}


int main() {
    
    int n;
    cout<<"Enter number of nodes of linked list: ";
    cin>>n;
    cout<<"Enter nodes of linked list: \n ";
     Node *res=head;
    for(int i=0;i<n;i++) {
        insertNodeAtEnd();
    }
    display();
    delNthNode(head,4);
    display();
}