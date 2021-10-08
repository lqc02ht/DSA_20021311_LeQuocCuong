#include<iostream>

using namespace std;

string balancedSums(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int right = sum - a[0];
    int left = 0;
    for(int i = 0; i < n; i++)
    {
        if(left == right)
        {
            return "YES";
        }
        left += a[i];
        right -= a[i+1];
    }
    if(left == right)
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    int k;
    int n;
    cin>>k;
    while(k != 0)
    {
        cin>>n;
        int a[n];
        for(int i = 0 ; i < n; i++)
        {
            cin>>a[i];
        }
        cout<<balancedSums(a, n)<<'\n';
        k--;
    }
    return 0;
}
