#include <iostream>
#include <algorithm>

using namespace std;

void SelectionSort(int a[], int n)
{
    int Min;
    for (int i = 0; i < n-1; i++)
    {
        Min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[Min])
            {
                Min = j;
            }
        }
        swap(a[Min], a[i]);
    }
}

void print(int a[], int n)
{
    for (int i=0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}

int main()
{
    int a[] = {2, 1, 10, 6, 3, 8, 7, 13, 20};
    int n = sizeof(a)/sizeof(a[0]);
    SelectionSort(a, n);
    print(a, n);
    return 0;
}

