#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution{
    public:
void subset1(vector<int>&arr,int index,int n,int target,vector<int>&ds)
{
    if(index=n){
        ds.push_back(target);
        return;
    }    
    subset1(arr,index+1,n,target+arr[index],ds);
    subset1(arr,index+1,n,target,ds);
}
    public:
        vector<int> subsetSums(vector <int>arr,int n){
        vector<int> ds;
        subset1(arr,0,N,0,ds);
        sort(ds.begin(),ds.end());
        return ds;
        }
};
