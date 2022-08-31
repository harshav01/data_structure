#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int>v={11,12,15,18,2,5,6,8};
    int start=0;int end=v.size()-1;int mid;
    int N=v.size();
    int prev,next;
    while(start<=end)
    {
        mid=(start+end)/2;
        next=(mid+1)%N;
        prev=(mid+N-1)%N;

        if(v[mid]<=v[prev] and v[mid]<=v[next])
        {
            cout<<mid<<endl;
            break;
        }
        else if(v[0]<=v[mid])
            start=mid+1;
        else if(v[mid]<=v[end])
            end=mid-1;
    }
    return 0;
}