#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rodcutting(int length[],int size,int price[],int N)
{
    int i,j;
    int t[size+1][N+1];
    for(i=0;i<size+1;i++)
        for(j=0;j<N+1;j++)
        {
            if(i==0||j==0)
                t[i][j]=0;
            
        }
    for(i=1;i<size+1;i++)
        for(j=1;j<N+1;j++)
        {
            if(length[i-1]<=j)
                t[i][j]=max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    return t[size][N];
}

int main(){
    int price[]={1,5,8,9,10,17,17,20};
    int length[]={1,2,3,4,5,6,7,8};
    int N=8;
    int size=sizeof(length)/sizeof(length[0]);
    int ans=rodcutting(length,size,price,N);
    cout<<ans<<endl;
    return 0;
}