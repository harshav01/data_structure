#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void add(int arr[],int index,vector<int>&v,int count,int sum,int n)
{
    if(index>=n)
    {
        if(count==sum)
        {
            for(auto it:v)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    v.push_back(arr[index]);
    count+=arr[index];
    add(arr,index+1,v,count,sum,n);
    v.pop_back();
    count-=arr[index];

    add(arr,index+1,v,count,sum,n);
}

bool printone(int arr[],int index,vector<int>&v,int count,int sum,int n)
{
    if(index>=n)
    {
        if(count==sum)
        {
            for(auto it:v)
                cout<<it<<" ";
            cout<<endl;
           return true;
        }
         return false;
    }
    v.push_back(arr[index]);
    count+=arr[index];
   if(printone(arr,index+1,v,count,sum,n)==true) return true;
   
    v.pop_back();
    count-=arr[index];

    if(printone(arr,index+1,v,count,sum,n)==true) return true;

    return false;
}
int counting(int arr[],int index,vector<int>&v,int count,int sum,int n)
{
    if(index>=n)
    {
        if(count==sum)
        {
            return 1;
        }
        return 0;
    }
    count+=arr[index];
   int l= counting(arr,index+1,v,count,sum,n);
    count-=arr[index];
   int r= counting(arr,index+1,v,count,sum,n);
   return l+r;
}
int main(){
    int arr[]={1,2,1,3};
    vector<int>v;
    int n=4;
    int sum=3;
    add(arr,0,v,0,sum,n);
    // cout<<printone(arr,0,v,0,sum,n);
    // cout<<counting(arr,0,v,0,sum,n);
    return 0;
}