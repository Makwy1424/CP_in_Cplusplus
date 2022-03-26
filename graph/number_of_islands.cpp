#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        int row = grid.size(), col = grid[0].size();

        if (i < 0 || j < 0)
            return;
        if (i >= row || j >= col)
            return;
        if (grid[i][j] == '0')
            return;

        grid[i][j] = '0';

        dfs(i - 1, j, grid);
        dfs(i + 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int cc = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '0')
                    continue;
                dfs(i, j, grid);
                cc++;
            }
        }
        return cc;
    }
};

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    }

    Solution s;
    int ans = s.numIslands(v);
    cout << ans << endl;

    return 0;
}