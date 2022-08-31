#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int adjacent(int arr[],int n,int index,vector<int>&dp)
// {
//     if(index==0)
//         return arr[index];
//     if(index<0)
//         return 0;
//     if(dp[index]!=-1)
//         return dp[index];
//     int pick=arr[index]+adjacent(arr,n,index-2,dp);
//     int not_pick=adjacent(arr,n,index-1,dp);
//     return dp[index]=max(pick,not_pick);
// }
int adjacent(vector<int>v,int n)
{
    int prev=v[0];
    int prev2=0;
    for(int i=1;i<v.size();i++)
    {
        int take=v[i];
        if(i>1) take=take+prev2;
        int not_take=0+prev;
        int curr=max(take,not_take);
        prev2=prev;
        prev=curr;
    }
    return prev;
}
int main(){
    vector<int>v={2,3,2};
    // cout<<adjacent(arr,n);
    if(v.size()==1) cout<<v[0];
    vector<int>temp,temp1;
    for(int i=0;i<v.size();i++)
    {
        if(i!=0) temp.push_back(v[i]);
        if(i!=v.size()-1) temp1.push_back(v[i]);
    }
    int ans=max(adjacent(temp,temp.size()),adjacent(temp1,temp1.size()));
    cout<<ans;
    return 0;
}