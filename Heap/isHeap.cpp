#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

bool isHeap(Node* root){
    if(root==NULL){
        return true;
    }
    if(root->left!=NULL && root->data<root->left->data){
        return false;
    }
    if(root->right!=NULL && root->data<root->right->data){
        return false;
    }
    return isHeap(root->left) && isHeap(root->right);
}