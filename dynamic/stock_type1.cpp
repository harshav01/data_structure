#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int stock[]={7,1,5,3,6,4};
    int n=sizeof(stock)/sizeof(stock[0]);
    // int max=stock[0];
    int mini=stock[0];
    int profit=0;
    for(int i=1;i<n;i++)
    {
        int cost=stock[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,stock[i]);
    }
    cout<<profit;
    return 0;
}