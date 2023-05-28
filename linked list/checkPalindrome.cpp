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

ListNode* reversell(ListNode* head) {
        ListNode* newHead=NULL;
        ListNode* next;
        while(head!=NULL){
            next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        return newHead;
    }

//Naive : traverse the ll and storer the data in array or vector and then check for palindrome (TC: O(N) SC: O(N))
//optimal1: Find middle of ll and once found reverse the second half of ll and then keep a pointer at the begining of ll 
//and traverse first and second half of ll. (TC: O(N) SC: O(1))    
bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        slow->next=reversell(slow->next);
        slow=slow->next;
        
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
                return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
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