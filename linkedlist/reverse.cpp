#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next; 
};

void reverse(node *head);
node *temp=NULL,*head=NULL;

void reverse(node *head){
    node *p=head,*q=NULL,*r=NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    node *temp = q;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    int i=5;
while(i--){
 temp = new node();
 temp->data=10-i;
 
 if(head == NULL){
     head = temp;
 }
 else{
     temp->next = head;
     head = temp;
 }

}
reverse(head);
}
