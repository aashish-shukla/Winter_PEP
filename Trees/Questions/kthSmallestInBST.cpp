#include<iostream>
#include<vector>
using namespace std;
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
int kthSmallest(TreeNode* root, int k) {
    vector<int> v;
    inorder(root,v);
    return v[k-1];
}

int main(){
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(1);
    root->right=new TreeNode(4);
    root->left->right=new TreeNode(2);
    cout<<kthSmallest(root,1);
    return 0;
}
