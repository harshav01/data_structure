#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int bitonic(vector<int>v,int start,int end)
{
    int mid;int n=v.size();
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid>0 and mid<v.size()-1)
        {
            if(v[mid]>v[mid-1] and v[mid]>v[mid+1])
            {
                return mid;
            }
            else if(v[mid-1]>v[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        else if(mid==0)
        {
            if(v[0]>v[1])
                return 0;
            else
                return 1;
        }
        else if(mid==v.size()-1)
        {
            if(v[n-1]>v[n-2])
                return n-1;
            else
                return n-2;
        }
    }
}
int asc(vector<int>&v,int start,int end,int key)
{
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==key)
            return mid;
        else if(key<v[mid])
            end=mid-1;
        else
            start=mid+1;    
    }
    return -1;
}
int dsc(vector<int>&v,int start,int end,int key)
{
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid==key)
            return mid;
        else if(key<v[mid])
            start=mid+1;
        else
           end=mid-1;     
    }
    return -1;
}

int main(){
    vector<int>v={5,10,20,15};
    int start=0;int end=v.size()-1;
    int n=v.size();
    int key=10;
    int peak=bitonic(v,start,end);
    cout<<peak<<endl;
    int left=asc(v,start,peak,key);
    int right=dsc(v,peak,end,key);
    if(left!=-1)
        cout<<left;
    else if(right!=-1)
        cout<<right;
    return 0;
}