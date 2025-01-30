#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* removeDuplicates(Node *head){
    Node *temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node *temp1=temp;
        while(temp1->next!=NULL){
            if(temp->data==temp1->next->data){
                temp1->next=temp1->next->next;
            }
            else{
                temp1=temp1->next;
            }
        }
        temp=temp->next;
    }
    return head;

}