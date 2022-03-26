#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

vector<vector<int>> g;
void dfs(int vertex, int par = -1)
{
    for (auto child : g[vertex])
    {
        if (child == par)
            continue;
        dfs(child, vertex);
    }
}
bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Smruti" << endl;
    return 0;
}