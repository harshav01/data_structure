#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int func(int prices[],int n,int buy,int sell)
{
    int profit;
    for(int i=0;i<n;i++)
    {
        if(buy)
        {
            profit=max(-prices[i]+(prices,n,)+0,0+func(i+1));
        }
        
    }
}

int main(){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(prices[0]);
    int buy=1;
    int sell=0;
    int ans=func(prices,n,buy,sell);
    cout<<ans;
    return 0;
}