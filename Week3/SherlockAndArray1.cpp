#include<iostream>

using namespace std;

string BalancedArray(int a[], int n)
{
    if(n == 1 || n == 0)
        return "YES";
    else if(n == 2)
    {
        for(int i = 0; i < n; i++)
        {
            if (a[0] == 0 || a[1] == 0)
                return "YES";
            else
                return "NO";
        }
    } else {
        int sum1 = 0;
        int sum2;
        for(int i = 0; i < n-1; i++)
        {
            sum2 = 0;
            sum1 += a[i];
            for(int j = i + 2; j < n; j++)
            {
                sum2 += a[j];
            }
            if (sum1 == sum2)
            {
                return "YES";
            }
        }
    }
    return "NO";
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
    cout<<BalancedArray(a, n);
    return 0;
}
