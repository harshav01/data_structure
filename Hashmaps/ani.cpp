#include <bits/stdc++.h>

using namespace std; 

vector <int> nextGreater(int arr[],int n){

    // int n = sizeof(arr)/sizeof(arr[0]);
    stack <int> s;
    vector <int> ans;

    for(int i = n-1; i >= 0; i--){

        if(s.empty() == true)
            ans.push_back(-1);

        else if(s.size() > 0 && arr[i] < s.top())
            ans.push_back(s.top());
        else{
            while (!s.empty() || arr[i] >= s.top())
            {
                s.pop();
            }
            if(s.size() == 0)
                ans.push_back(-1);
            else
                ans.push_back(s.top());
        }
        s.push(arr[i]);
    }

    return ans;
}

int main(){
    int n;
    cout << "Enter the no. of elements: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    

    vector <int> ans = nextGreater(arr,size);
    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}