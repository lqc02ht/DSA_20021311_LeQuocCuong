#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int minEdge(vector <int> edges[], int u, int v, int n)
{
    vector<bool> vi(n, 0);
    vector<int> dis(n, 0);
    queue <int> Q;
    dis[u] = 0;
    Q.push(u);
    vi[u] = true;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();

        for (int i=0; i<edges[x].size(); i++)
        {
            if (vi[edges[x][i]])
                continue;
            dis[edges[x][i]] = dis[x] + 1;
            Q.push(edges[x][i]);
            vi[edges[x][i]] = 1;
        }
    }
    return dis[v];
}

void addEdge(vector <int> edges[], int u, int v)
{
   edges[u].push_back(v);
   edges[v].push_back(u);
}

int main()
{
    int n, m, X, Y, x, y;
    cin >> n >> m >> X >> Y;
    vector <int> edges[n];

    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        addEdge(edges, x, y);
    }
    cout << minEdge(edges, X, Y, n);
    return 0;
}
