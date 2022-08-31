#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;int input;int count=1;
    int arr[n];vector<int>ans;int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans.push_back(1);
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]>arr[i])
        {
            count=count+1;
            ans.push_back(count);
        }
        else
        {
            count=1;
            ans.push_back(count);
        }
    }
    ans.pop_back();
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
        sum=sum+ans[i];
    }
    cout<<sum;
    return 0;
}