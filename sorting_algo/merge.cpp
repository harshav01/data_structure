#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void merge(int *arr,int front,int mid,int end)
{
    int temp[end-front+1];
    int i=front;
    int j=mid+1;
    int k=0;
    
    while(i<=mid and j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i+=1;
        }    
        else
        {
            temp[k]=arr[j];
            j+=1;
        }
        k=k+1;        
    }
    while(i<=mid)
        temp[k++]=arr[i++];

    while(j<=end)
        temp[k++]=arr[j++];

    
    for(int i=front;i<=end;i++)
    {
        arr[i]=temp[i-front];
    }    
}

void mergesort(int *arr,int front,int end)
{
    if(front<end)
    {
        int mid=(front+end)/2;
        mergesort(arr,front,mid);
        mergesort(arr,mid+1,end);
        merge(arr,front,mid,end);
    }
}

int main(){
    int arr[]={3, 5, 7, 1, 2, 4, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}