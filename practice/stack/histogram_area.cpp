#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> SmallestRight(int arr[], int n)
{
    stack<pair<int, int>> s;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
            v.push_back(-1);
        else if (s.size() != 0 and s.top().first < arr[i])
            v.push_back(s.top().second);
        else if (s.size() != 0 and s.top().first >= arr[i])
        {
            while (s.size() > 0 and s.top().first >= arr[i])
                s.pop();
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}
vector<int> SmallestLeft(int arr[], int n)
{
    stack<pair<int, int>> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
            v.push_back(-1);
        else if (s.size() != 0 and s.top().first < arr[i])
            v.push_back(s.top().second);
        else if (s.size() != 0 and s.top().first >= arr[i])
        {
            while (s.size() > 0 and s.top().first >= arr[i])
                s.pop();
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    return v;
}

int main()
{
    int arr[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> NSR = SmallestRight(arr, n);
    vector<int> NSL = SmallestLeft(arr, n);
    int MaH=0;
    vector<int> width;
    for(auto i=0;i<n;i++)
    {
        width.push_back((NSR[i]-NSL[i]-1)*arr[i]);
    }
    int maxi=width[0];
    for(auto i=1;i<n;i++)
        maxi=max(maxi,width[i]);
    cout<<maxi;
    return 0;
}