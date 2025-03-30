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

vector<int> postOrder(TreeNode* root){
    vector<int> res;
    if(root==NULL)
        return res;
    vector<int> left = postOrder(root->left);
    for(int i=0;i<left.size();i++)
        res.push_back(left[i]);
    vector<int> right = postOrder(root->right);
    for(int i=0;i<right.size();i++)
        res.push_back(right[i]);
    res.push_back(root->data);
    return res;
}
void bfs(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        cout<<node->data<<" ";
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
    }
}

void dfs(TreeNode* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    dfs(root->left);
    dfs(root->right);
}





int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    vector<int> in = inorder(root);
    vector<int> pre = preOrder(root);
    vector<int> post = postOrder(root);
    for(int i=0;i<in.size();i++)
        cout<<in[i]<<" ";
    cout<<endl;
    for(int i=0;i<pre.size();i++)
        cout<<pre[i]<<" ";
    cout<<endl;
    for(int i=0;i<post.size();i++)
        cout<<post[i]<<" ";
    return 0;
}

