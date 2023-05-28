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

Node* addLl(Node* l1,Node* l2){
     Node* dummy=new Node();
        Node* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry==1){
            int sum=0;
            if(l1!=NULL)
            {
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->data;
                l2=l2->next;
            }
            
            sum+=carry;
            carry=sum/10;
            Node* node=new Node(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return dummy->next;
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
    Node *a=new Node(1);
	a->next=new Node(2);
	a->next->next=new Node(3);
	Node *b=new Node(5);
	b->next=new Node(3);
    b->next->next=new Node(4);
    Node* res=addLl(a,b);
    display(res);
}