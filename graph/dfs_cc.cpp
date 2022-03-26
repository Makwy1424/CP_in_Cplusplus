#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N]; // Maximum vertex
bool vis[N] = {false};

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex)
{
    vis[vertex] = true;
    // cout << vertex << endl;
    current_cc.push_back(vertex); // Input the vertex in the current connecting components
    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
}

int32_t main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc); // Input the current cc in cc vector.
    }

    for (auto &val : cc)
    {
        for (int i = 0; i < val.size(); i++)
        {
            cout << val[i] << " ";
        }
        cout << endl;
    }
    cout << "The total number of connected components->  " << cc.size() << endl;

    return 0;
}