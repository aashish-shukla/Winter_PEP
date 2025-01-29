#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    Node* temp=head;
    if(head==NULL){
        head=n;
        n->next=head;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertAtTail(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        n->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;


}
void display(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);

    
}
void deleteNode(Node* &head,int val){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->data==val){
        Node* todelete=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
        delete todelete;
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
Node* deleteKthNode(Node* &head,int k){
    Node* temp=head;
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        Node* todelete=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
        delete todelete;
        return head;
    }
    for(int i=0;i<k-2;i++){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return head;
}
int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n1;
    Node* head=&n1;
    Node* temp=head;
    // display(head);
    insertAtTail(head,5);
    // display(head);

    insertAtHead(head,0);
    deleteNode(head,0);
    display(head);
}