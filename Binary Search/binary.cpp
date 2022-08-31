#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int>v={2,5,6,8,11,12,15,18,25,68};
    int n=v.size();
    int key=18;
    int start=0;int end=v.size()-1;
    
    while(start<end)
    {
        int mid=(start+end)/2;
        if(v[mid]==key)
        {
            cout<<mid;
            break;
        }
            
        else if(key<=v[mid])
            end=mid-1;
        else
            start=mid+1;
    }
        
    
    return 0;
}
