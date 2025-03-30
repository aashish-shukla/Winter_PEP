#include<iostream>
#include<vector>
using namespace std;
bool containesDuplicates(vector<int> &nums){
    //apply sliding window approach
    int left=0, cnt=0;
    for(int right=0;right<nums.size();right++){
        cnt++;
        while(cnt>1){
            if(nums[left]==nums[right])
                return true;
            left++;
            cnt--;
        }
    }
    return false;

}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<containesDuplicates(nums);
    return 0;
}