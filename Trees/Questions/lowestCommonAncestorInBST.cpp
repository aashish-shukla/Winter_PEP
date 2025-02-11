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
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root==NULL){
        return NULL;
    }
    if(root->val==p->val || root->val==q->val){
        return root;
    }
    TreeNode* left=lowestCommonAncestor(root->left,p,q);
    TreeNode* right=lowestCommonAncestor(root->right,p,q);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left!=NULL){
        return left;
    }
    return right;
}

int main(){
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(5);
    root->right=new TreeNode(1);
    root->left->left=new TreeNode(6);
    root->left->right=new TreeNode(2);
    root->right->left=new TreeNode(0);
    root->right->right=new TreeNode(8);
    root->left->right->left=new TreeNode(7);
    root->left->right->right=new TreeNode(4);
    TreeNode* p=new TreeNode(5);
    TreeNode* q=new TreeNode(1);
    cout<<lowestCommonAncestor(root,p,q)->val;
    return 0;
}