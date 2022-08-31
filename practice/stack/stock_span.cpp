// consecutive smaller or equal before it
// Nearest Greatest Left Variation

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int>StockSpan(int arr[],int n)
{
    stack<pair<int,int>>s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()!=0 and s.top().first>arr[i])
            v.push_back(s.top().second);
        else if(s.size()!=0 and s.top().first<=arr[i])
        {
            while(s.top().first<=arr[i] and s.size()>0)
                s.pop();
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    return v;
    
}

int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans=StockSpan(arr,n);

    for(auto i=0;i<n;i++)
    {
        cout<<i-ans[i]<<" ";
    return 0;
}