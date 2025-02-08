#include<iostream>
#include<vector>
using namespace std;
//Two Sum in BST

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

void inorder(Node* root, vector<int>& v){
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

bool twoSum(Node* root, int target){
    vector<int> v;
    inorder(root,v);
    int i = 0, j = v.size()-1;
    while(i<j){
        if(v[i]+v[j]==target)
            return true;
        else if(v[i]+v[j]<target)
            i++;
        else
            j--;
    }
    return false;
}