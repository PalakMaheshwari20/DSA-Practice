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


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

 ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL || k==0)
            return head;
        //Calculating the length of ll
        int len=1;
        ListNode* cur=head;
        while(cur->next!=NULL){
            cur=cur->next;
            len++;
        }
        
        //attach the last node to first node
        cur->next=head;
        //calculating the length which needs to be traversed and detach the ll to get the output ll
        k=k%len;
        k=len-k;
        while(k--) cur=cur->next;
        
        //make the node as head and break the continuation
        head=cur->next;
        cur->next=NULL;
        return head;
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
}