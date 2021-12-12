#include <bits/stdc++.h>

using namespace std;

int Knapsack(int W, int w[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (w[n - 1] > W)
        return Knapsack(W, w, val, n - 1);
    else
        return max(val[n - 1] + Knapsack(W - w[n - 1], w, val, n - 1),
                   Knapsack(W, w, val, n - 1));
}

int main()
{
    int n, W;
    cin >> n >> W;
    int w[n], val[n];
    for(int i = 0; i < n; i++) {
        cin >> w[i] >> val[i];
    }
    cout << Knapsack(W, w, val, n);
    return 0;
}

