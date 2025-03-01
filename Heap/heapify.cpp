#include<iostream>
#include<vector>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void heapify(vector<int>& heap,int i){
    int n=heap.size();
    int l=2*i+1;
    int r=2*i+2;
    int maxIndex=i;
    if(l<n && heap[l]>heap[maxIndex]){
        maxIndex=l;
    }
    if(r<n && heap[r]>heap[maxIndex]){
        maxIndex=r;
    }
    if(maxIndex!=i){
        swap(heap[i],heap[maxIndex]);
        heapify(heap,maxIndex);
    }
}
void maxHeap(vector<int>& nums){
    int n=nums.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(nums,i);
    }
}
void minHeap(vector<int>& nums){
    int n=nums.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(nums,i);
    }

}