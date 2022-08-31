#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1)
}
int fibonaaci(int n)
{
    if(n<1)
        return 0;
    
}
int main(){
    int n=5;
    cout<<fact(n);
    cout<<fibonaaci(n);
    return 0;
}