#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > mergeIntervals(vector<vector<int> > &intervals){
    vector<vector<int> > res;
    if(intervals.size()==0)
        return res;
    sort(intervals.begin(),intervals.end());
    res.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(res.back()[1]>=intervals[i][0])
            res.back()[1]=max(res.back()[1],intervals[i][1]);
        else
            res.push_back(intervals[i]);
    }
    return res;
}