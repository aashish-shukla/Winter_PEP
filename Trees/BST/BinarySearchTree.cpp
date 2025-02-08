#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }

};



Node* isPresent(Node* root, int x){
    if(root==NULL)
        return NULL;
    if(root->data==x)
        return root;
    Node* l = isPresent(root->left,x);
    Node* r = isPresent(root->right,x);
    if(l!=NULL)
        return l;
    else
        return r;
}

Node* minValueNode(Node* root){
    Node* current = root;
    while(current->left!=NULL)
        current = current->left;
    return current;
}

Node* maxValueNode(Node* root){
    Node* current = root;
    while(current->right!=NULL)
        current = current->right;
    return current;
}

Node* deleteNode(Node* root, int x){
    if(root==NULL)
        return root;
    if(x<root->data)
        root->left = deleteNode(root->left,x);
    else if(x>root->data)
        root->right = deleteNode(root->right,x);
    else{
        if(root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
    return root;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->left->right = new Node(8);
    root->right->left = new Node(15);
    root->right->right = new Node(25);
    root->left->left->left = new Node(1);
    root->left->left->right = new Node(4);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(9);
    root->right->left->left = new Node(13);
    root->right->left->right = new Node(18);
    root->right->right->left = new Node(23);
    root->right->right->right = new Node(27);
    cout<<"Min Value Node: "<<minValueNode(root)->data<<endl;
    cout<<"Max Value Node: "<<maxValueNode(root)->data<<endl;
    root = deleteNode(root,10);
    cout<<"Min Value Node: "<<minValueNode(root)->data<<endl;
    cout<<"Max Value Node: "<<maxValueNode(root)->data<<endl;
    return 0;
}