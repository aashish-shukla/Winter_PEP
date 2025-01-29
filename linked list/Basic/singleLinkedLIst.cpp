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
void insertAtTail(Node* &head,int val){
    Node *n=new Node(val);
    Node* temp= head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertAtHead(Node* &head,int val){
    Node *n=new Node(val);
    n->next=head;
    head=n;
}
bool search(Node* &head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteNode(Node* &head,int val){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->data==val){
        head=head->next;
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}   
int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node* head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    bool ispresent=search(head,4);
    display(head);
    cout<<ispresent<<endl;
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,0);
    display(head);
    deleteNode(head,5);
    display(head);



}

