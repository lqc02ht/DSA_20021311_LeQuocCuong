#include <iostream>
#include <algorithm>

using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        QuickSort(a, low, pi - 1);
        QuickSort(a, pi + 1, high);
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
    QuickSort(a, 0, n - 1);
    print(a, n);
    return 0;
}
