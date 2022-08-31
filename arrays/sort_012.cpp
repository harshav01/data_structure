#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,1,2,2,0,0,1,2};
    int a=0,b=0,c=0;
    vector<int>v;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
             a++;
        else if(arr[i]==1)
            b++;
        else if(arr[i]==2)
            c++;
    }
    while(a>0)
    {
        v.push_back(0);
        a--;
    }
    while(b>0)
    {
        v.push_back(1);
        b--;
    }
    while(c>0)
    {
        v.push_back(2);
        c--;
    }
    for(auto it:v)
        cout<<it<<endl;

        
   
    
    
    
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<endl;   
    return 0;
}