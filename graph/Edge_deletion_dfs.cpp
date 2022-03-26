#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
vector<int> g[N];
int weight[N], sum[N];

void dfs(int v, int p = -1)
{
    sum[v] += weight[v];
    for (auto child : g[v])
    {
        if (child == p)
            continue;
        dfs(child, v);
        sum[v] += sum[child];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> weight[i + 1];
    }
    for (ll i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    for (ll i = 0; i < n; i++)
    {
        cout << "node = " << i + 1 << " "
             << " sum = " << sum[i + 1] << endl;
    }
    ll max_sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (auto co : g[i])
        {
            ll node1 = i, node2 = co;
            max_sum = (max_sum > (sum[co] * (sum[1] - sum[co]))) ? max_sum : (sum[co] * (sum[1] - sum[co]));
        }
    }
    cout << max_sum << endl;
    return 0;
}