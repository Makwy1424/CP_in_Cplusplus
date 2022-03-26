// Height of a tree - Maximum distance(no. of edges) of a node from a leaf node.
// DFS in tree

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int height[N], depth[N];

void dfs(int vertex, int par = 0)
{
    cout << vertex << endl;
    for (auto child : g[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1; // Amaku agaru depth of root janathila so child ra depth decide kariheba.
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1); // Last ru height janapadiba and then uparaku height count hei hei jiba.
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        // I64d--> This is prefer over %lld in windows.
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << height[i] << " " << depth[i] << endl;
    }
    return 0;
}