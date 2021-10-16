#include <iostream>

using namespace std;

void InsertionSort(int a[], int n)
{
    int k, j;
    for (int i = 1; i < n; i++)
    {
        k = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > k)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
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
    InsertionSort(a, n);
    print(a, n);
    return 0;
}
