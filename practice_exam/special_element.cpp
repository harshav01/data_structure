#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX=100;
int counting(int arr[][MAX],int m,int n)
{
    int count=0;
    int rowmax[m];int rowmin[m];
    int colmax[n];int colmin[n];

    for(int i=0;i<m;i++)
    {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]>maxi)
                maxi=arr[i][j];
            if(arr[i][j]<mini)
                mini=arr[i][j];
        }
        rowmax[i]=maxi;
        rowmin[i]=mini;
    }

    for(int j=0;j<n;j++)
    {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]>maxi)
                maxi=arr[i][j];
            if(arr[i][j]<mini)
                mini=arr[i][j];
        }
        colmax[j]=maxi;
        colmin[j]=mini;
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==rowmax[i]||arr[i][j]==rowmin[i]||arr[i][j]==colmin[j]||arr[i][j]==colmax[j])
                count++;
        }
    }
    return count;
}

int main(){
    int arr[][MAX]={{1,3,4},
                    {5,2,9},
                    {8,7,6}};   
    int m=3;int n=3;
    cout<<counting(arr,m,n);

    return 0;
}