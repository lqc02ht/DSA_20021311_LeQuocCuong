#include<iostream>

using namespace std;

void findTriplets(int a[], int n)
{
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (a[i]+a[j]+a[k] == 0)
                {
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] <<'\n';
                    found = true;
                }
            }
        }
    }
    if (found==false)
        cout<<"nothing to show";
}

int main()
{
    int n, a[100];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    findTriplets(a, n);
    return 0;
}
