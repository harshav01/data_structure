#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={3,0,0,2,0,4};
    int left[100];int right[100];int result[100];
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    left[0]=arr[0];
    for(int i=1;i<n;i++)
        left[i]=max(arr[i],left[i-1]);
    right[n-1]=arr[n-1];
    for(int i=n-1;i>=0;i--)
        right[i]=max(arr[i],right[i+1]);
    
    for(int i=0;i<n;i++)
    {
         result[i]=min(left[i],right[i])-arr[i];
    }
    for(int i=0;i<n;i++)
        sum=sum+result[i];

    cout<<sum;
    return 0;
}