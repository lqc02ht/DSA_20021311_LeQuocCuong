#include<iostream>
#include<algorithm>

using namespace std;

int findMinimum(int a[], int n)
{
    sort(a, a + n);
    int res = INT_MAX;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i+1] - a[i] < res)
        {
            res = a[i+1] - a[i];
        }
    }
    return res;
}

void printArr(int a[], int n)
{
    sort(a, a + n);
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i+1] - a[i] == findMinimum(a, n))
        {
            cout<<a[i]<<' '<<a[i+1]<<' ';
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    printArr(a, n);
    return 0;
}
