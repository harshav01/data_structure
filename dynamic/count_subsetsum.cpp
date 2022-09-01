#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int countng(int arr[],int sum,int n)
{
    int i,j;
    int t[n+1][sum+1];
    for(i=0;i<n+1;i++)
        for(j=0;j<sum+1;j++)
    {
        if(i==0)
            t[i][j]=0;
        if(j==0)
            t[i][j]=1;        
    }
    for(i=1;i<n+1;i++)
        for(j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
                t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];      
            else
               t[i][j]=t[i-1][j];   
        }  
    return t[n][sum];  
}
int main(){
    int arr[]={2,3,5,6,8,10};
    int sum=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=countng(arr,sum,n);
    cout<<a;
    return 0;
}