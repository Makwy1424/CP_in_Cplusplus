//find a unique element in an array.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i, n) for (ll i = 0; i < n; i++)
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        int res = 0;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
            res ^= i;
        }
        cout << "\n---" << res << endl;
    }

    return 0;
}