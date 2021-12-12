#include<iostream>

using namespace std;

bool isSafe(int **a, int x, int y, int n) {
    if(x < n && y < n && a[x][y] == 1)
        return 1;
    return 0;
}

bool InMaze(int **a, int x, int y, int n, int **sol) {

    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;
        return 1;
    }

    if (isSafe(a, x, y, n)) {
        sol[x][y] = 1;
        if (InMaze(a, x + 1, y, n, sol))
            return 1;
        if (InMaze(a, x, y + 1, n, sol))
            return 1;
        sol[x][y] = 0;
        return 0;
    }
    return 0;
}

void printSol(int **a, int n, int **sol) {
    if (InMaze(a, 0, 0, n, sol)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << sol[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int **a = new int*[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int **sol = new int*[n];
    for (int i = 0; i < n; i++) {
        sol[i] = new int[n];
        for (int j = 0; j < n; j++){
            sol[i][j] = 0;
        }
    }
    cout << '\n';
    printSol(a, n, sol);
    return 0;
}
