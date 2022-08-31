#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string str="ABS";
    string str2="SAB";
    
    int sum=0;int sum1=0;
    for(int i=0;i<str.size();i++)
    {
        sum=sum+str[i];
        
    }
    for(int i=0;i<str2.size();i++)
    {
        sum1=sum1+str2[i];
        
    }
     if(sum==sum1)
        cout<<true;
    else
        cout<<false;   
    
    return 0;
}