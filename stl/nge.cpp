// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i, n) for (ll i = 0; i < n; i++)

vector<ll> NGE(vector<ll> given_num)
{
    vector<ll> index(given_num.size(), 0);
    stack<ll> st_index;
    fo(i, given_num.size())
    {
        while (!st_index.empty() && given_num[st_index.top()] < given_num[i])
        {
            index[st_index.top()] = i;
            st_index.pop();
        }
        st_index.push(i);
    }
    while (!st_index.empty())
    {
        index[st_index.top()] = -1;
        st_index.pop();
    }

    return index;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    in(n);
    vector<ll> given_num;
    fo(i, n)
    {
        ll k;
        in(k);
        given_num.pb(k);
    }

    auto nge_index = NGE(given_num);
    ll i = 0;
    for (auto it = nge_index.begin(); it != nge_index.end(); ++it)
    {
        if ((*it) == -1)
        {
            cout << given_num[i] << " -1" << endl;
        }
        else
        {
            cout << given_num[i] << " " << given_num[(*it)] << endl;
        }
        i++;
    }
    return 0;
}