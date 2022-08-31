#include<bits/stdc++.h>
#include<iostream>
#define size 5;
using namespace std;

int main()
{   
    int water[100];int sum=0;
    int arr[]={3,0,0,2,0,4};
    int left[10];int right[10];
    left[0]=arr[0];
    for(int i=1;i<6;i++)
        left[i]=max(arr[i],left[i-1]);
    right[5]=arr[5];
    for(int i=4;i>=0;i--)
        right[i]=max(arr[i],right[i+1]);
    for(int i=0;i<6;i++)
    {
        water[i]=min(left[i],right[i])-arr[i];
        sum=sum+water[i];
    }
    cout<<sum;
    return 0;
}