#include <iostream>
#include <vector>

using namespace std;

void findNotes(int deno[], int note)
{
    int n = 9;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        while (note >= deno[i]) {
            note -= deno[i];
            ans.push_back(deno[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';
}

int main()
{
    int note;
    cin >> note;
    int deno[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    findNotes(deno, note);
    return 0;
}
