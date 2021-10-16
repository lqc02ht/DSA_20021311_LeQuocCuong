#include <iostream>
#include <algorithm>

using namespace std;


void Heapify(int a[], int n, int i)
{
    int Max = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[left] > a[Max])
        Max = left;
    if (right < n && a[right] > a[Max])
        Max = right;
    if (Max != i) {
        swap(a[i], a[Max]);
        Heapify(a, n, Max);
    }
}

void HeapSort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        Heapify(a, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        Heapify(a, i, 0);
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
    HeapSort(a, n);
    print(a, n);
    return 0;
}
