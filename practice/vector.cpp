// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n,ele;
    cout << "Enter the no. of elements: " << endl;
    cin >> n;
    // vector <int> v;
    vector<int> v; 
    v.reserve(n);
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++){
        cin>>ele;
        v.push_back(ele);
    //   v.at(i) = ele;
    }
for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    return 0;
}