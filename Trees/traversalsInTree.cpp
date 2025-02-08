#include<iostream>
#include<vector>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> inorder(TreeNode* root){
    vector<int> res;
    if(root==NULL)
        return res;
    vector<int> left = inorder(root->left);
    for(int i=0;i<left.size();i++)
        res.push_back(left[i]);
    res.push_back(root->data);
    vector<int> right = inorder(root->right);
    for(int i=0;i<right.size();i++)
        res.push_back(right[i]);
    return res;
}

vector<int> preOrder(TreeNode* root){
    vector<int> res;
    if(root==NULL)
        return res;
    res.push_back(root->data);
    vector<int> left = preOrder(root->left);
    for(int i=0;i<left.size();i++)
        res.push_back(left[i]);
    vector<int> right = preOrder(root->right);
    for(int i=0;i<right.size();i++)
        res.push_back(right[i]);
    return res;
}

