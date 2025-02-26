#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int mostProfittablePath(vector<vector<int> > &edges, int bob, vector<int> &amount){
    vector<TreeNode*> nodes;
    for(int i=0;i<amount.size();i++){
        nodes.push_back(new TreeNode(amount[i]));
    }
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        if(nodes[u]->left == NULL){
            nodes[u]->left = nodes[v];
        }else{
            nodes[u]->right = nodes[v];
        }
    }
    int maxProfit = 0;
    for(int i=0;i<nodes.size();i++){
        TreeNode* node = nodes[i];
        int profit = 0;
        while(node != NULL){
            profit += node->val;
            if(node->left == NULL && node->right == NULL){
                maxProfit = max(maxProfit, profit);
            }
            if(node->left != NULL && node->right != NULL){
                if(node->left->val > node->right->val){
                    node = node->left;
                }else{
                    node = node->right;
                }
            }else if(node->left != NULL){
                node = node->left;
            }else{
                node = node->right;
            }
        }
    }
    return maxProfit;
}