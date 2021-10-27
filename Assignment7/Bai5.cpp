#include<iostream>
#include<algorithm>

using namespace std;

void permutations(string s, int left, int right)
{
    if (left == right)
        cout << s << '\n';
    else {
        for (int i = left; i <= right; i++){
            swap(s[left], s[i]);
            permutations(s, left+1, right);
            swap(s[left], s[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }

    char kh[n];
    for(int i = 0; i < n; i++)
        kh[i] = (int)a[i] + 48;

    string s = "";
    for(int i = 0; i < n; i++)
        s += kh[i];

    int m = s.size();
    permutations(s, 0, m - 1);

    return 0;
}
