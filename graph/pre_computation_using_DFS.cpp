#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 3;
vector<int> g[N];
int height[N], depth[N];
bool vis[N] = {false};

void dfs(int vertex)
{
    if (vis[vertex])
        return;
    vis[vertex] = true;
    for (auto &child : g[vertex])
    {
        depth[child] = depth[vertex] + 1;
        dfs(child);
        height[vertex] = max(height[vertex], height[child] + 1);
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
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << height[i] << " " << depth[i] << endl;
    }
    return 0;
}