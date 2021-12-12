#include<iostream>

using namespace std;

bool checkSum(int a[], int n, int X) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum = a[i];
        for (int j = i + 1; j < n ; j++) {
            sum += a[j];
            if(sum == X)
                return 1;
        }
    }
    if(a[n - 1] == X)
        return 1;
    else
        return 0;
    return 0;
}

int main()
{
    int n, X;
    cin >> n >> X;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(!checkSum(a, n, X))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
