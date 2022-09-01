#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool SubsetSum(int arr[],int sum,int n)
{
    int i,j;
    int t[n+1][sum+1];
    for(i=0;i<n+1;i++)
        for(j=0;j<sum+1;j++)
        {
            if(i==0)
                t[i][j]=false;
            if(j==0)
                t[i][j]=true;
        }
    for(i=1;i<n+1;i++)
        for(j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
                t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][sum];
}

bool EqualPartition(int arr[],int sum,int n)
{
    if(sum%2!=0)
        return false;
    else
        return SubsetSum(arr,sum/2,n);
}

int main(){
    int arr[]={1,8,12,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+arr[i];
    bool ans=EqualPartition(arr,sum,n);
    cout<<ans<<endl;
    return 0;
}