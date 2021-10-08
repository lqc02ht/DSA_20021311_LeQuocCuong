#include<iostream>

using namespace std;

int pairs(int a[], int n, int k)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] - a[j] == k || a[j] - a[i] == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<pairs(a, n, k);
    return 0;
}
