#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Write C++ code here
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (v[i] > v[i + 1])
            {
                ans[i] = ans[i] + ans[i + 1];
            }
        }
        else if (i == n - 1)
        {
            if (v[i] > v[i - 1])
            {
                ans[i] = ans[i] + ans[i - 1];
            }
        }
        else
        
        {
            if (v[i] > v[i - 1] or v[i] > v[i + 1])
            {
                ans[i] = ans[i] + max(ans[i - 1], ans[i + 1]);
            }
        }
    }

    int sum = 0;
    for (auto it : ans)
    {
        sum += it;
        cout << it << " ";
    }
    cout << endl;
    cout << sum;

    return 0;
}