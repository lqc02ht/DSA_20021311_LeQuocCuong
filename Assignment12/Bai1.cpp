#include<iostream>
#include<list>

using namespace std;

class ComputerNet {
    int V;
    list<int>* adj;
    void dfs(int v, bool visited[]);

public:
    ComputerNet(int V);

    void addEdge(int v, int w);
    int NumConnected();
};

int ComputerNet::NumConnected()
{
    bool* vs = new bool[V];
    int cnt = 0;
    for (int v = 0; v < V; v++)
        vs[v] = false;

    for (int v = 0; v < V; v++) {
        if (vs[v] == false) {
            dfs(v, vs);
            cnt += 1;
        }
    }
    return cnt;
}

void ComputerNet::dfs(int v, bool vs[])
{
    vs[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {
        if (!vs[*i]) {
            dfs(*i, vs);
        }
    }
}

ComputerNet::ComputerNet(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void ComputerNet::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int main()
{
    int n;
    cin >> n;
    ComputerNet g(n);
    int m;
    cin >> m;
    int x, y;
    for(int i = 1; i <= m; i++) {
        cin >> x >> y;
        g.addEdge(x, y);
    }
    cout << g.NumConnected();
    return 0;
}
