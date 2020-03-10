#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next; 
};
void *reverse_recurse(node *q,node *p);

node *temp=NULL,*head=NULL;

void *reverse_recurse(node *q,node *p){

    if(p != NULL){
        reverse_recurse(p,p->next);
        p->next = q;
    }
    else{
        head = q;
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
node *q=NULL;
reverse_recurse(q,head);
temp = head;
while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
}
}
