// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
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

    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    fo(i, n)
    {
        ll k, p;
        cin >> k >> p;
        pair<ll, ll> temp = mp(k, p);
        v.pb(temp);
    }
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << "-------------------------------------------------" << endl;

    for (auto val : v)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << "-------------------------------------------------" << endl;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << "-------------------------------------------------" << endl;

    for (auto val : v)
    {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}