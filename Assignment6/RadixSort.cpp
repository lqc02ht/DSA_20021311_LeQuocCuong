#include <iostream>

using namespace std;

int getMax(int a[], int n)
{
    int Max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    return Max;
}

void countSort(int a[], int n, int m)
{
    int output[n];
    int cnt[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[(a[i] / m) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        output[cnt[(a[i] / m) % 10] - 1] = a[i];
        cnt[(a[i] / m) % 10]--;
    }

    for (int i = 0; i < n; i++)
        a[i] = output[i];
}

void RadixSort(int a[], int n)
{
    int m = getMax(a, n);
    for (int i = 1; m / i > 0; i *= 10)
    {
        countSort(a, n, i);
    }

}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}

int main()
{
    int a[] = {2, 1, 10, 6, 3, 8, 7, 13, 20};
    int n = sizeof(a) / sizeof(a[0]);
    RadixSort(a, n);
    print(a, n);
    return 0;
}
