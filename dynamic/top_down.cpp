#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int topdown(int wt[],int val[],int W,int n)
{
    int i,j;
    int t[n+1][W+1];
    for(i=0;i<n+1;i++)
        for(j=0;j<W+1;j++)
            if(i==0 || j==0)
                t[i][j]=0;

    for(i=1;i<n+1;i++)
    {
        for(j=1;j<W+1;j++)
        {
        if(wt[i-1]<=j)
            t[i][j]=max(val[i-1] + t[i-1][j-wt[i-1]],t[i-1][j]);
        else
            t[i][j]=t[i-1][j];
        }
    }
    return t[n][W];
}
int main(){
    int i,j;
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    // int W = sizeof(wt)/sizeof(wt[0]);
    // int n = sizeof(val)/sizeof(val[0]);
    int ans=topdown(wt,val,7,4);
    cout<<ans;
    return 0;
}