#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val=val;
        next=NULL;
    }
ListNode* removeElements(ListNode *head, int val){
    ListNode *dummy=new ListNode(0);
    dummy->next=head;
    ListNode *temp=dummy;
    while(temp->next!=NULL){
        if(temp->next->val==val){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return dummy->next;
}