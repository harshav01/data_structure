#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,1,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    sort(arr,arr+n);
    int i=0;int j=n-1;
    while(i<j)
    {
        sum=sum+(arr[j]-arr[i]);
        i++;j--;
    }
    cout<<sum;
    return 0;
}