#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
void combination(vector<int> arr,int index,int target,vector<int>&ds,vector<vector<int>&>v)
{
    if(index==n)
    {
        if(target==0)
            v.push_back(ds);
        return;
    }
    if(arr[index]<=target)
    {
        ds.push_back(arr[index]);
        combination(arr,index,target-arr[index],ds,v);     
        ds.pop_back();        
    }
    combination(arr,index+1,target,ds,v);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>ds;
        combination(candidates,0,target,ds,v);
        return ans;
    }
};
int main(){
    int arr[]={2,3,6,7};
    vector<int>ds;
    int n=4;
    vector<vector<int>>v;
    combination(arr,0,7,ds,v);
    return 0;
}