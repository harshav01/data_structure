#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void subsequence(int i,vector<int> &v,int arr[],int n)
{
    if(i>=n)
    {
        for(auto it:v)
            cout<<it<<" ";
    
    if(v.size()==0)
        cout<<"{}";
    cout<<endl;
    return;
    }
    v.push_back(arr[i]);
    subsequence(i+1,v,arr,n);
    v.pop_back();
    subsequence(i+1,v,arr,n);
}
int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int>v;
    subsequence(0,v,arr,n);
    return 0;
}