#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int>& heap,int x){
    heap.push_back(x);
    int n=heap.size();
    int i=n-1;
    while(i>0){
        int p=(i-1)/2;
        if(heap[p]<heap[i]){
            swap(heap[p],heap[i]);
            i=p;
        }else{
            break;
        }
    }
}
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
vector<int> maxHeap(vector<int>& nums){
    vector<int> heap;
    for(int i=0;i<nums.size();i++){
        insert(heap,nums[i]);
    }
    return heap;
}
vector<int> minHeap(vector<int>& nums){
    vector<int> heap;
    for(int i=0;i<nums.size();i++){
        insert(heap,-nums[i]);
    }
    return heap;
}
void deleteRoot(vector<int>& heap){
    int n=heap.size();
    swap(heap[0],heap[n-1]);
    heap.pop_back();
    heapify(heap,0);
}
void deleteElement(vector<int>& heap,int x){
    int n=heap.size();
    int i;
    for(i=0;i<n;i++){
        if(heap[i]==x){
            break;
        }
    }
    if(i==n){
        return;
    }
    swap(heap[i],heap[n-1]);
    heap.pop_back();
    heapify(heap,i);
}
vector<int> heapSort(vector<int>& nums){
    vector<int> heap;
    for(int i=0;i<nums.size();i++){
        insert(heap,nums[i]);
    }
    vector<int> ans;
    while(heap.size()){
        ans.push_back(heap[0]);
        deleteRoot(heap);
    }
    return ans;
}

int main(){
    vector<int> nums={18,43,36,13,7};
    vector<int> maxH=maxHeap(nums);
    vector<int> minH=minHeap(nums);
    for(int i=0;i<maxH.size();i++){
        cout<<maxH[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<minH.size();i++){
        cout<<-minH[i]<<" ";
    }
    cout<<endl;
    deleteRoot(maxH);
    for(int i=0;i<maxH.size();i++){
        cout<<maxH[i]<<" ";
    }
    cout<<endl;
    deleteElement(maxH,36);
    for(int i=0;i<maxH.size();i++){
        cout<<maxH[i]<<" ";
    }
    cout<<endl;
    vector<int> sorted=heapSort(nums);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}