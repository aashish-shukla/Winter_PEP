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
Node* sortList(Node* head){
    // Node *temp=head;
    // while(temp!=NULL){
    //     Node *temp1=temp;
    //     while(temp1!=NULL){
    //         if(temp->data>temp1->data){
    //             int t=temp->data;
    //             temp->data=temp1->data;
    //             temp1->data=t;
    //         }
    //         temp1=temp1->next;
    //     }
    //     temp=temp->next;
    // }
    // return head;
    Node* temp=head;
    int zero=0,one=0,two=0;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else{
            two++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zero>0){
            temp->data=0;
            zero--;
        }
        else if(one>0){
            temp->data=1;
            one--;
        }
        else{
            temp->data=2;
            two--;
        }
        temp=temp->next;
    }
    return head;
}