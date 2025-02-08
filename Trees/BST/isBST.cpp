// Given the root of a binary tree. Check whether it is a BST or not.
// Note: We are considering that BSTs can not contain duplicate Nodes.
// A BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
// Examples:

// Input: root[] = [2, 1, 3, N, N, N, 5]
//    2
//  /    \
// 1      3
//         \
//          5
// Output: true 
// Explanation: The left subtree of every node contains smaller keys and right subtree of every node contains greater keys. Hence, the tree is a BST.
// Input: root[] = [2, N, 7, N, 6, N, 9]
//   2
//    \
//     7
//      \
//       6
//        \
//         9
// Output: false 
// Explanation: Since the node to the right of node with key 7 has lesser key value, hence it is not a valid BST.
#include<iostream>
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


bool isBST(Node* root){
    if(root==NULL)
        return true;
    if(root->left!=NULL && root->left->data>=root->data)
        return false;
    if(root->right!=NULL && root->right->data<=root->data)
        return false;
    return isBST(root->left) && isBST(root->right);

}

