#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string permutation(int n,int k)
{
    vector<int>ds;
    int fact=1;int i;
    for( i=1;i<n;i++)
    {
        ds.push_back(i);
        fact=fact*i;
    }
    ds.push_back(i);
    string s = " ";
    k=k-1;
     while(true)
     {
         s=s+to_string(ds[k/fact]);
         ds.erase(ds.begin()+k/fact);
         if(ds.size()==0)
            break;
        k=k%fact;
        fact=fact/ds.size();
     }
     return s;
}
int main(){
    int n=4;
    int k=17;
    cout<<permutation(n,k);
    return 0;
}