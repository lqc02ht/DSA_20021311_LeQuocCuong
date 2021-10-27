#include<iostream>

using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << '\n';
}

void genBinary(int a[], int n, int i)
{
    if (i == n) {
        print(a, n);
        return;
    }
    a[i] = 0;
    genBinary(a, n, i + 1);
    a[i] = 1;
    genBinary(a, n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    genBinary(a, n, 0);
    return 0;
}
