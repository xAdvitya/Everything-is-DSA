#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next; 
};

int recurse_max(node* head);
node *temp=NULL,*head=NULL;

int recurse_max(node* n){
    int max=0;
    if(n==NULL){
        return INT_MIN;
    }
    
    max = recurse_max(n->next);
    if(max > n->data){
        return max;
        }
        else{
            return n->data;
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
  cout<<"Max value is "<<recurse_max(head);
}
