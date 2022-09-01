#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int countdiff(int arr[],int diff,int n)
{
    int t[n+1][diff+1];
    int i,j;
    for(i=0;i<n+1;i++)
        for(j=0;j<diff+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    for(i=1;i<n+1;i++)
        for(j=1;j<diff+1;j++)
        {
            if(arr[i-1]<=j)
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][diff];
}
int main(){
    int arr[]={2,3,5,6,8,10};
    int diff=1;int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        sum=sum+arr[i];
    int ans=countdiff(arr,(sum+diff)/2,n);
    cout<<ans;
    return 0;
}