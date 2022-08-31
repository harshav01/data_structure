#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(int n)
{
    // int sum=0;
    // while(n)
    // {
    //     sum=sum+(n%10);
    //     n=n/10;
    // }
    // return sum;
    if (n == 0)
        return 0;
    // return (n % 9 == 0) ? 9 : (n % 9);
    if(n%9==0)
        return 9;
    else
        return n%9;
}

int main(){
    int n;
    cin>>n;
    int ans=solve(n);
    // while(ans!=1)
    // {
    //     if(ans>1 and ans<9)
    //     {
    //         cout<<0;
    //         break;
    //     }   
    //     ans=solve(n);
    // }
    // cout<<1;
    if(ans>1 and ans<10)
        cout<<0;
    else
        cout<<1;
    return 0;
}