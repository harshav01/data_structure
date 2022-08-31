#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> nsl(int arr[],int n)
{
    vector <int>v;
    stack <pair<int,int>>s;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
            v.push_back(-1);
        else if(s.size()>0 and s.top().first<arr[i])
            v.push_back(s.top().second);
        else if(s.size()>0 and s.top().first>=arr[i])
            {
                while(s.size()>0 and s.top().first>=arr[i])
                    s.pop();
                if(s.empty())
                    v.push_back(-1);
                else
                    v.push_back(s.top().second);
            }
        s.push({arr[i],i});
    }
     return v;
}
vector<int> nsr(int arr[],int n)
{
    vector <int>v;
    stack <pair<int,int>>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
            v.push_back(7);
        else if(s.size()>0 and s.top().first<arr[i])
            v.push_back(s.top().second);
        else if(s.size()>0 and s.top().first>=arr[i])
            {
                while(s.size()>0 and s.top().first>=arr[i])
                    s.pop();
                if(s.empty())
                    v.push_back(7);
                else
                    v.push_back(s.top().second);
            }
        s.push({arr[i],i});
    }
     reverse(v.begin(),v.end());
     return (v);
}

void mah(int arr[],int n){
	vector<int> NSL=nsl(arr,n);
	vector<int> NSR=nsr(arr,n);
	vector<int> result;
    int max;
	
    for(int i=0;i<n;i++)
        result.push_back((NSR[i]-NSL[i]-1)*arr[i]);
    
    max=result[0];
	for(int i=0;i<result.size();i++)
    {         
        if(result[i]>max)
            max=result[i];    
    }
    cout<<max<<endl;
}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
     mah(arr,n);
    return 0;
}