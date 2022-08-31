#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//PARAMETERIC
void sum(int n,int c)
{
    if(n<1)
    {
        cout<<c;
        return;
    }    
    sum(n-1,c+n);
        
}
// FUNCTIONAL
int sum1(int n)
{ 
    if(n<1)
        return 0;
    return n+sum1(n-1);
}
int main(){
    int n=10;
    // sum(n,0);  
   cout<<sum1(10);
    return 0;
}