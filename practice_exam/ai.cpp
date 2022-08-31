#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fact(int n)
{
    int product=1;
    while(n>0)
    {
        product=product*n;
        n--;
    }
    return product;
}
int main(){
    string str;bool flag=1;int maxi=0;int c=0;
    unordered_map<char,int>map;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        map[str[i]]++;
    }
    for(auto i:map)
    {
        maxi=max(maxi,i.second);  
    }
    if(maxi==1)
        cout<<fact(n);
    else
    {
        // for(auto i:map)
        // {
        //     if(i.second>1)
        //         c++;
        // }
        cout<<fact(n)*3;

    }
    
    return 0;
}