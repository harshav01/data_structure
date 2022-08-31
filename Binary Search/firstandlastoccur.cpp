#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int firstOccur(vector<int>v,int start,int end,int key)
{
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(v[mid]==key)
        {
            return mid;
        }
        else if(key<=v[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}

int LastOccur(vector<int>v,int start,int end,int key)
{
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(v[mid]==key)
        {
            return mid;
        }
        else if(key<=v[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}

int main(){
    vector<int>v={2,5,6,8,11,11,11,11,12,15,18,25,68};
    int n=v.size();
    int key=11;
    int start=0;int end=v.size()-1;
    int mid;
    while(start<=end)
    {
         mid=(start+end)/2;
        if(v[mid]==key)
        {
            cout<<mid<<endl;
            break;
        }
            
        else if(key<=v[mid])
            end=mid-1;
        else
            start=mid+1;
    }

    cout<<firstOccur(v,0,mid-1,key)<<endl;
    cout<<LastOccur(v,mid+1,end,key)<<endl;

    int f= firstOccur(v,0,mid-1,key);
    int L= LastOccur(v,mid+1,end,key);
    cout<<L-f+1<<endl;
    return 0;

}