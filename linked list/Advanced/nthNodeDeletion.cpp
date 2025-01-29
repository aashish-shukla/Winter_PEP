#include<iostream>
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
void nthNodeDeletion(int n){
    node *slow=head;
    node *fast=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    node *temp=slow->next;
    slow->next=slow->next->next;
    delete temp;
}
int main()
{
    head=addnode(1);
    head->next=addnode(2);
    head->next->next=addnode(3);
    head->next->next->next=addnode(4);
    head->next->next->next->next=addnode(5);
    nthNodeDeletion(1);
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}