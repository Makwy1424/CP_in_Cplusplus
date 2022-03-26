// Idea is to find the path of two nodes given and the last common node.
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 10;
vector<int> g[N];
int par[N];

void dfs(int v, int p = -1)
{
    par[v] = p;
    for (auto child : g[v])
    {
        if (child == p)
            continue;
        dfs(child, v);
    }
}

vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    ll x, y;
    cin >> x >> y;
    vector<int> path_x = path(x), path_y = path(y);
    int loc = -1;
    for (ll i = 0; i < min(path_x.size(), path_y.size()); i++)
    {
        if (path_x[i] == path_y[i])
        {
            loc = path_x[i];
        }
        else
            break;
    }
    cout << loc << endl;

    return 0;
}