#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;



int knapsack(int wt[], int val[], int W, int n,int t[][1002])
{

    if (n == 0 || W == 0)
        return 0;
    if (t[n][W] != -1)
        return t[n][W];
    if (wt[n - 1] <= W)
        return t[n][W] = max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1,t), knapsack(wt, val, W, n - 1,t));
    else
        return t[n][W] = knapsack(wt, val, W, n - 1,t);
}
int main()
{
    int t[1002][1002];
    int i, j;
    for (i = 0; i < 1002; i++)
        for (j = 0; j < 1002; j++)
            t[i][j] = -1;
    int n = 4;
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int W = 7;
    int ans = knapsack(wt, val, W, n,t);
    cout << ans << endl;
    return 0; 
}