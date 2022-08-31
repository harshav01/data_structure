#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
 int arr[]={-7,-5,-2,0,1};
 int arr1[10];int j;
 for(int i=4,j=0;i>=0;i--,j++)
    arr1[i]=arr[j]*arr[j];
sort(arr1,arr1+5);
for(int i=0;i<5;i++)
    cout<<arr1[i]<<"\n";
    return 0;
}