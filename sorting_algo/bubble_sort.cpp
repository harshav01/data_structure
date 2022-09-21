#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n)
{
    bool swaped;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
             swaped=false;
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=true;
            }    
        }
        if(swaped==false)
            break;
    }
}

int main(){
    int arr[]={8,9,1,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}