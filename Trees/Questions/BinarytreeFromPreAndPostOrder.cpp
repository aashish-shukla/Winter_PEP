#include<iostream>
#include<vector>
using namespace std;
class TreeNode {
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* constructFromPrePost(vector<int>&pre,vector<int>&post){
    int n=pre.size();
    if(n==0){
        return NULL;
    }
    TreeNode* root=new TreeNode(pre[0]);
    if(n==1){
        return root;
    }
    int l=0;
    for(int i=0;i<n;i++){
        if(post[i]==pre[1]){
            l=i+1;
            break;
        }
    }
    vector<int> leftPre(pre.begin()+1,pre.begin()+l+1);
    vector<int> leftPost(post.begin(),post.begin()+l);
    vector<int> rightPre(pre.begin()+l+1,pre.end());
    vector<int> rightPost(post.begin()+l,post.end()-1);
    root->left=constructFromPrePost(leftPre,leftPost);
    root->right=constructFromPrePost(rightPre,rightPost);
    return root;

}
