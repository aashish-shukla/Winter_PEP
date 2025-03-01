#include<iostream>
#include<vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};
ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0){
        return head;
    }
    ListNode* temp=head;
    int n=1;
    while(temp->next!=NULL){
        temp=temp->next;
        n++;
    }
    temp->next=head;
    k=k%n;
    k=n-k;
    while(k--){
        temp=temp->next;
    }
    head=temp->next;
    temp->next=NULL;
    return head;
}