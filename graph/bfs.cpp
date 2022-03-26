#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
vector<int> g[N];

int vis[N];
int level[N];

// Bfs runs in level order mechanism.
//           one order
//      2nd order   2nd order
//     3rd order     3rd order
//    4th order       4th order
//   5th order         5th order
//  6th order           6th order

void bfs(int source)
{
    level[0] = 1;
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    level[source] = 1;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << "Node = " << cur_v << endl;
        for (auto child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] + 1;
            }
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bfs(1);

    return 0;
}