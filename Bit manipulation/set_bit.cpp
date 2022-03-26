//program to check if the bit is set or not.
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n >> i;
        ll f = 1;
        f = f << i;
        if (n & f)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
//1100
//1101