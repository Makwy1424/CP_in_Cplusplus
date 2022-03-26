#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];

class Solution
{
public:
    void dfs(int i, int j, int newcolor, int initialColor, vector<vector<int>> &image)
    {
        int row = image.size(), col = image[0].size();
        if (i < 0 || j < 0)
            return;
        if (i >= row || j >= col)
            return;
        if (initialColor != image[i][j])
            return;

        image[i][j] = newcolor;

        dfs(i - 1, j, newcolor, initialColor, image);
        dfs(i, j + 1, newcolor, initialColor, image);
        dfs(i + 1, j, newcolor, initialColor, image);
        dfs(i, j - 1, newcolor, initialColor, image);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int initialcolor = image[sr][sc];
        if (initialcolor != newColor)
            dfs(sr, sc, newColor, initialcolor, image);
        return image;
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Solution s;
    int sr = 1, sc = 1, newColor = 2;
    vector<vector<int>> v = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    vector<vector<int>> ans = s.floodFill(v, sr, sc, newColor);
    for (auto val : ans)
    {
        for (auto &an : val)
            cout << an << " ";

        cout << endl;
    }
    return 0;
}