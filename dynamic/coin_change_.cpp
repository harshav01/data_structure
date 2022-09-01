#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int CoinChange(int coin[],int Sum,int n)
{
   int t[n+1][Sum+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<Sum+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    for(int i=1;i<n+1;i++)
        for(int j=1;j<Sum+1;j++)
        {
            if(coin[i-1]<=j)
                t[i][j]=t[i][j-coin[i-1]]+t[i-1][j];
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