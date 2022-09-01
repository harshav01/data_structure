#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // Naive Approach
    // int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    // int max_here=0;
    // int max_so_far=INT_MIN;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++)
    // {
    //     max_here=max_here+arr[i];
    //     if(max_so_far<max_here)
    //         max_so_far=max_here;
    //     
    //     if(max_here<0)
    //         max_here=0;
    // }
    // cout<<max_so_far;

// Dynamic Programming approach
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int max_here=arr[0];
    int max_so_far=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        max_here=max(arr[i],max_here+arr[i]);
        max_so_far=max(max_so_far,max_here);
    }
    cout<<max_so_far;
    return 0;
}