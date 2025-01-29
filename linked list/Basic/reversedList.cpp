#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next= NULL;
    Node(int val){
        data=val;
    }
};
Node* reversedList(Node* &head){
    Node* curr= head;
    Node* next= curr->next;
    Node* prev= NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    Node* head=&n1;
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    Node* reversed=reversedList(head);
    Node* temp=reversed;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

}