#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* loopdetection(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
int loopStart(Node* &head){
    Node* loop=loopdetection(head);
    if(loop==NULL){
        return -1;
    }
    Node* ptr1=head;
    Node* ptr2=loop;
    while(ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return ptr1->data;
}
Node* loopRemove(Node* &head){
    Node* loopInit=loopdetection(head);
    if(loopInit==NULL){
        return NULL;
    }
    Node* ptr1=head;
    Node* ptr2=loopInit;
    while(ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr2=loopInit;
    while(ptr2->next!=ptr1){
        ptr2=ptr2->next;
    }
    ptr2->next=NULL;
    return head;
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
    n10.next=&n3;
    Node* head=&n1;
    cout<<loopStart(head)<<endl;
    Node* newHead=loopRemove(head);
    while(newHead!=NULL){
        cout<<newHead->data<<"->";
        newHead=newHead->next;
    }

}   