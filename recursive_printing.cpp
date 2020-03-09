#include <iostream>
#include <string>
using namespace std;
class node{
    public:
    int data;
    node* next; 
};
void recurse_print(node* head);
node *temp=NULL,*head=NULL;

void recurse_print(node* head)
{
    if(head){
        cout<<head->data<<endl;
        recurse_print(head->next);
    }
}

int main()
{
    int i=5;
while(i--){
 temp = new node;
 temp->data=10-i;
 
 if(head == NULL){
     head = temp;
 }
 else{
     temp->next = head;
     head = temp;
 }

}
  recurse_print(head);  
}
