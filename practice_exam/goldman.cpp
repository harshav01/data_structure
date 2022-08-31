#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sumOfdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}

int main(){
    int s,m;
    vector<int>v;
    cin>>m>>s;
    int size=pow(10,m);
    int j=size/10;
    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=j;i<size;i++)
    {
        if(sumOfdigits(i)==s)
        {
            maxi=max(maxi,i);
            mini=min(mini,i);
        }
    }
    if(maxi==INT_MIN and mini==INT_MAX)
        cout<<-1<<-1;
    else
    cout<<mini<<" "<<maxi;
    
    
    
    // for(int i=0;i<v.size();i++)
    // {
    //     maxi=max(maxi,v[i]);
    //     mini=min(mini,v[i]);
    // }
    // cout<<mini<<" "<<maxi;

    return 0;
}
