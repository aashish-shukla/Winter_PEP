#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
    Node(int var){
        var=data;
    }

};
Node* kReversed(Node* &head,int k){
    if (!head) return NULL;

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL) {
        head->next = kReversed(next, k);
    }

    return prev;
}
int main(){
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    Node n6(6);
    Node n7(7);
    Node n8(8);
    Node n9(9);
    Node n10(10);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=&n6;
    n6.next=&n7;
    n7.next=&n8;
    n8.next=&n9;
    n9.next=&n10;
    Node* head=&n1;
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    Node* reversed=kReversed(head,3);
    Node* temp=reversed;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}