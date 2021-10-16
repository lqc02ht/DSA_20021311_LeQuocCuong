#include <iostream>
#include <algorithm>

using namespace std;

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
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
    BubbleSort(a, n);
    print(a, n);
    return 0;
}
