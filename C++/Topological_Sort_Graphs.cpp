// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
#define nl '\n'

struct Graph
{
public:
    int n;                   // number of vertices
    vector<vector<int>> adj; // adjecency matrix
    vector<bool> vis;        // boolean to check if this node is visited or not ?
    vector<int> ans;         // topo order

    Graph(int n)
    {
        this->n = n;
        adj.resize(n + 1);
    }

    void dfs(int node)
    {
        vis[node] = true;
        for (auto &child : adj[node])
            if (!vis[child])
                dfs(child);
        ans.push_back(node);
    }

    void Topological_sort()
    {
        vis.assign(n + 1, false);
        ans.clear();
        for (int node = 1; node <= n; node++)
            if (!vis[node])
                dfs(node);

        reverse(ans.begin(), ans.end());
    }

    void display()
    {
        for (int node = 0; node < sz(ans); node++)
        {
            cout << ans[node];
            if (node != sz(ans) - 1)
                cout << " ";
        }
        cout << nl;
    }
};

int main()
{
    int n, m; // n vertices and m edges
    cin >> n >> m;

    Graph g1(n);                 // to resize adj matrix
    for (int i = 1; i <= m; i++) // to input the vertices
    {
        int u, v;
        cin >> u >> v;
        g1.adj[u].push_back(v);
    }

    g1.Topological_sort(); // this is topo function
    g1.display();          // to display

    return 0;
}