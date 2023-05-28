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
//Naive: make a hashmap and store all the nodes(completely not just the data part) and check if any node repeats
//optimal1: calculate the lenght of both ll and the traverse the bigger one by the difference in distance now traverse
// both the ll simultaneously and when they reach the common node its the point of intersection.
//optimal2: traverse both ll when one reaches end again start its traversal from begining of other ll continue until both become equal
//TC: O(2N) SC: O(1)
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            a = a==NULL?headB:a->next;
            b = b==NULL?headA:b->next;
        }
        return a;
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