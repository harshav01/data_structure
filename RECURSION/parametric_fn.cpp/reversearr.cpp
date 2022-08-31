#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
void reverse(int arr[],int l,int r)
{
    if(l<r)
    {
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1); 
    }
}
void reverse1pointer(int arr[],int i,int n)
{
    if(i>=n/2)
        return;
    swap(arr[i],arr[n-i-1]); 
    reverse1pointer(arr,i+1,n);       
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // int a=0;int b=4;
    // while(a!=b)
    // {
    //     swap(arr[a],arr[b]);
    //     a++;b--;
    // }
    // for(int i=0;i<5;i++)
    //     cout<<arr[i];
    // reverse(arr,0,n-1);
    reverse1pointer(arr,0,n);
    print(arr,n);
    return 0;
}