#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rodcutting(int price[],int length[],int N,int MaxLength)
{
    int i,j;
    int t[N+1][MaxLength+1];
    for(i=0;i<N+1;i++)
        for(j=0;j<MaxLength+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;

        }
    for(i=1;i<N+1;i++)
        for(j=1;j<MaxLength+1;j++)
        {
            if(price[i-1]<=j)
                t[i][j]=max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    return t[N][MaxLength];
}

int main(){
    int price[]={1,5,8,9,10,17,17,20};
    int length[]={1,2,3,4,5,6,7,8};
    int W=8;
    int N=sizeof(price)/sizeof(price[0]);
    int ans=rodcutting(price,length,N,W);
    cout<<ans<<endl;
    return 0;
}