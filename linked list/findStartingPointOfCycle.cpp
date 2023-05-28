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

//Naive Approach: we can make a hashmap where we traverse if null is reached it has no cycle else we'll add nodes(completely not just data part) and see if we find the node again then cycle is present and the node which repeats is the entry point (TC: O(N) SC: O(N))
//Efficient approach: if we'll traverse slow by one step and fast by 2 step when they both collide we take an entry pointer which will begin from the starting point of ll and then entry pointer and slow pointer
// would both move by one step now when slow and entry piiunter collide its the entry node of the cycle
ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=entry)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
            return entry;
            }
        }
        return NULL;
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
    
}