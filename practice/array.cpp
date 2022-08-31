// Given an array arr[] consisting of N positive integers, the task is to sort the array such that – 
// 
// All even numbers must come before all odd numbers.
// All even numbers that are divisible by 5 must come first than even numbers not divisible by 5.
// If two even numbers are divisible by 5 then the number having a greater value will come first
// If two even numbers were not divisible by 5 then the number having a greater index in the array will come first.
// All odd numbers must come in relative order as they are present in the array.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,12,3,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;int j=n-1;int a=0;
    while(i<j)
    {
        if(arr[i]%2!=0 and arr[j]%2==0)
        {
            swap(arr[i],arr[j]);
            i++;j--;a++;
        }
            
        else if(arr[i]%2==0)
            {i++;a++;}
        else if(arr[j]%2!=0)
            j--;
        
    }
    int i1=0;int j1=1;
    for(i1=0;j1<a;j1++)
    {
        if(arr[i1]%5!=0 and arr[j1]%5==0)
            swap(arr[i1],arr[j1]);
        else if(arr[i1]%5==0 and arr[j1]%5==0 and arr[j]>arr[i])
        {
            swap(arr[i1],arr[j1]);
            i1++;j1++;
        }
        else if(arr[i1]%5==0)
            {i1++;j1++;}
        
        

    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}