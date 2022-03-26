#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> create_mask(ll i, vector<ll> &a)
{
    vector<ll> result;
    ll j = 0;
    while (i != 0)
    {
        if (i & 1)
            result.push_back(a[j]);

        j++;
        i = i >> 1;
    }
    return result;
}

bool cmpr(vector<ll> &a, vector<ll> &b)
{

    if (a.size() < b.size())
        return true;
    else
        return false;
}

int main()
{

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<ll>> ans;

    for (int i = 0; i < (1 << n); i++)
        ans.push_back(create_mask(i, v));

    sort(ans.begin(), ans.end(), cmpr);
    for (auto &val : ans)
    {
        for (ll i = 0; i < val.size(); i++)
            cout << val[i] << " ";

        cout << endl;
    }
    return 0;
}