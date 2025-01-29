#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
} *head=NULL;

node *addnode(int val){
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    return temp;
}

void FloydCycle(){
    node *slow=head;
    node *fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"Cycle Found";
            return;
        }
    }
    cout<<"Cycle Not Found";
}
int main()
{
    head=addnode(1);
    head->next=addnode(2);
    head->next->next=addnode(3);
    head->next->next->next=addnode(4);
    head->next->next->next->next=addnode(5);
    head->next->next->next->next->next=head->next;
    FloydCycle();
    return 0;
}