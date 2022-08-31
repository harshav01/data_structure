#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string permutation(string &a,int l,int r)
{
    vector<vector<string>>result;
    vector<string>ds;
    // Base case 
    if (l == r) 
    {
        result.push_back(a);
        return;
    } 
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
  
            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permutation(a, l+1, r); 
  
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
}

int main(){
    string h,w;string str="";string input;
    int n;
    cin>>h;
    cin>>w;
    cin>>n;
    string final=h+w;
    int size=final.size()-1;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        str=str+input;
    }
    vector<vector<string>>ans=permutation(final,0,size);
    return 0;
}