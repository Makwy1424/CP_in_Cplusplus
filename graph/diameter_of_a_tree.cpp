#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
vector<int> g[N + 1];
int depth[N];

void dfs(int vertex, int par = -1)
{
    for (int child : g[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    for (ll i = 0; i < n - 1; i++)
    {
        ll v1, v2;
        cin >> v1 >> v2;
        g[v2].push_back(v1);
        g[v1].push_back(v2);
    }
    dfs(1);

    int max_depth = -1, max_d;
    for (ll i = 1; i <= N; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
            max_d = i;
        }
        depth[i] = 0;
    }
    cout << "max_depth = " << max_depth << endl;
    dfs(max_d);
    max_depth = -1;
    for (ll i = 1; i <= N; i++)
    {
        if (max_depth < depth[i])
            max_depth = depth[i];
    }
    cout << max_depth << endl;
    return 0;
}

// Practice
//  #include <bits/stdc++.h>
//  using namespace std;
//  #define ll long long
//  const int N = 1e5 + 4;
//  vector<int> g[N + 1];
//  int depth[N];

// void dfs(ll vertex, ll par = -1)
// {
//     for (ll child : g[vertex])
//     {
//         if (child == par)
//             continue;
//         depth[child] = depth[vertex] + 1;
//         dfs(child, vertex);
//     }
// }

// int main()
// {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     int n;
//     cin >> n;
//     for (ll i = 0; i < n - 1; i++)
//     {
//         ll v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     dfs(1);

//     ll max_depth = -1, max_d;
//     for (ll i = 1; i <= N; i++)
//     {
//         if (max_depth < depth[i])
//         {
//             max_depth = depth[i];
//             max_d = i;
//         }
//         depth[i] = 0;
//     }
//     dfs(max_d);
//     max_depth = 0;
//     for (ll i = 1; i <= N; i++)
//     {
//         if (max_depth < depth[i])
//             max_depth = depth[i];
//     }

//     cout << "Maximum depth = " << max_depth << endl;
//     return 0;
// }