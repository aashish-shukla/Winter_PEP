#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// it should give output as 20 8 4 10 14 25 22
//fix it

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

vector<int> boundaryTraversal(TreeNode* root){
    
    vector<int> res;
    if(root==NULL)
        return res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=1;i<=n;i++){
            TreeNode* temp = q.front();
            q.pop();
            if(i==1 || i==n)
                res.push_back(temp->data);
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
    return res;
}


int main(){
    
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(8);
    root->right = new TreeNode(22);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(12);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(14);
    root->right->right = new TreeNode(25);
    vector<int> res = boundaryTraversal(root);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}