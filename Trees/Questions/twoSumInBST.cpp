#include<iostream>
#include<vector>
using namespace std;
//Two Sum in BST

class TreeNode{
    public:
    int val;
    TreeNode *left,*right;
    TreeNode(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(TreeNode* root,vector<int> &v){
    if(root==NULL){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
bool findTarget(TreeNode* root, int k) {
    vector<int> v;
    inorder(root,v);
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]+v[j]==k){
            return true;
        }
        else if(v[i]+v[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}

int main(){
    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(3);
    root->right=new TreeNode(6);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(4);
    root->right->right=new TreeNode(7);
    cout<<findTarget(root,9);
    return 0;
}