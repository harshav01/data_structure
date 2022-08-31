#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a=3;
    int b=7;
    int n=3*7;
    vector<int>ans;int c=0;
    while(n>0)
    {
        if(n%2==1)
            c++;
        n=n/2;
    }
    cout<<c<<" ";
        
    return 0;
}