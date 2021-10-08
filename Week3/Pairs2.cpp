#include <iostream>
#include <algorithm>

using namespace std;


int pairs(int a[], int n, int k)
{
    int cnt = 0;
    sort(a, a+n);
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(a[r] - a[l] == k)
        {
              cnt++;
              l++;
              r++;
        }
         else if(a[r] - a[l] > k) {
            l++;
         } else {
            r++;
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
