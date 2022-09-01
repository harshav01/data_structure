#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int CoinChange(int coin[],int Sum,int n)
{
    int i,j;
    int t[n+1][Sum+1];
    for(i=0;i<n+1;i++)
        for(j=0;j<Sum+1;j++)
        {
            if(i==0)
                t[i][j]=INT_MAX-1;

            if(j==0)
                t[i][j]=0;

                
        }
    // for(i=1;j<Sum+1;j++)
    // {
    //     if(j%coin[0]==0)
    //         t[i][j]=j/coin[0];
    //     else
    //         t[i][j]=INT_MAX-1;
    // }
    for(i=1;i<n+1;i++)
        for(j=1;j<Sum+1;j++)
        {
            if(coin[i-1]<=j)
                t[i][j]=min(1+t[i][j-coin[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][Sum];
}

int main(){
    int coin[]={1,2,3};
    int Sum=5;
    int n=sizeof(coin)/sizeof(coin[0]);
    int ans=CoinChange(coin,Sum,n);
    cout<<ans;
    return 0;
}