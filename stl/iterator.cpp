// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define in(n) cin >> n;
// #define fo(i, n) for (ll i = 0; i < n; i++)
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<int> v;
//     int n;
//     in(n);

//     fo(i, n)
//     {
//         int k;
//         in(k);
//         v.pb(k);
//     }
//     vector<int>::iterator it;
//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << (*it) << endl;
//     }
//     for (auto &value : v)
//     {
//         cout << value << endl;
//     }

//     return 0;
// }

// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define in(n) cin >> n
// #define in2(n, m) cin >> n >> m
// #define fo(i, n) for (ll i = 0; i < n; i++)
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     vector<pair<int, int>> v;
//     int x;
//     in(x);
//     fo(i, x)
//     {
//         int n, m;
//         in2(n, m);
//         v.pb({n, m});
//     }
//     fo(i, x)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     for (auto value : v)
//     {
//         cout << value.first << " " << value.second << endl;
//     }
//     vector<pair<int, int>>::iterator it;
//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << it->first << " " << it->second << endl;
//     }
//     for (it = v.begin(); it != v.end(); ++it)
//     {
//         cout << (*it).first << " " << (*it).second << endl;
//     }

//     return 0;
// }

// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define in(n) cin >> n;
#define in2(n, m) cin >> n >> m
#define fo(i, n) for (ll i = 0; i < n; i++)
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.pb(t);
    }
    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }

    for (auto it = v.begin(); it != v.end(); it++) //Auto means automatically declare it as a iterator.
    {
        cout << (*it) << endl;
    }
    for (auto &value : v)
    {
        cout << value << endl; //Auto,register,static,extern
    }

    return 0;
}