#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a[3];
int sizes[3];
int sums[3];

int main()
{
    cin >> sizes[0] >> sizes[1] >> sizes[2];
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < sizes[i]; ++j) {
            int x;
            cin >> x;
            a[i].push_back(x);
            sums[i] += x;
        }
        reverse(a[i].begin(), a[i].end());
    }
    while (sums[0] != sums[1] || sums[0] != sums[2] || sums[1] != sums[2])
    {
        int j = 0;
        for(int i = 0; i < 3; ++i) {
            if (sums[i] > sums[j]) {
                j = i;
            }
        }
        sums[j] -= a[j].back();
        a[j].pop_back();
    }
    cout << sums[0] << '\n';
    return 0;
}
