#include<iostream>
#include<algorithm>

using namespace std;

void findTriplets(int a[], int n)
{
    bool found = false;
    sort(a, a+n);
    for (int i = 0; i < n-1; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int x = a[i];
        while (l < r)
        {
            if (x + a[l] + a[r] == 0)
            {
                cout<< x << ' ' << a[l] << ' ' << a[r] << '\n';
                l++;
                r--;
                found = true;
                break;
            }
            else if (x + a[l] + a[r] < 0)
            {
                l++;
            } else {
                r--;
            }
        }
    }

    if (found == false)
        cout << "nothing to show" << '\n';
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
