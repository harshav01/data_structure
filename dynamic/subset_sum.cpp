#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool SubsetSum(int arr[],int sum,int n)
{   int i,j;
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
int main(){
    int arr[]={2,3,7,8,10};
    int sum=11;
    int n=sizeof(arr)/sizeof(arr[0]);
    bool ans = SubsetSum(arr,sum,n);
    cout<<ans;
    return 0;
}