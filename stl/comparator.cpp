
// code-1(for array)
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define in(n) cin >> n;
// #define in2(n, m) cin >> n >> m
// #define fo(i, n) for (ll i = 0; i < n; i++)

// bool should_i_swap(int a, int b)
// {
//     if (a < b)
//         return true;
//     else
//         return false;
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll t;
//     in(t);
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < (n - 1); i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (should_i_swap(a[i], a[j]))
//                 {
//                     swap(a[i], a[j]);
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)

//             cout << a[i] << endl;
//     }

//     return 0;
// }

// code==2(for pairs)

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define in(n) cin >> n;
// #define in2(n, m) cin >> n >> m
// #define fo(i, n) for (ll i = 0; i < n; i++)

// bool should_i_swap(pair<int, int> &a, pair<int, int> &b)
// {
//     if (a > b)
//         return true;
//     else
//         return false;
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         in(n);
//         vector<pair<int, int>> v;
//         for (int i = 0; i < n; i++)
//         {
//             pair<int, int> temp;
//             int x, y;
//             cin >> x >> y;
//             temp = make_pair(x, y);
//             v.pb(temp);
//         }
//         for (int i = 0; i < (n - 1); i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (should_i_swap(v[i], v[j]))
//                 {
//                     swap(v[i], v[j]);
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << v[i].first << " " << v[i].second << endl;
//         }
//     }

//     return 0;
// }

//code-3(first increasing and second decreasing)

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define in(n) cin >> n;
// #define in2(n, m) cin >> n >> m
// #define fo(i, n) for (ll i = 0; i < n; i++)

// bool should_i_swap(pair<int, int> &a, pair<int, int> &b)
// {
//     if (a.first != b.first)
//     {
//         if (a.first > b.first)
//             return true;
//         else
//             return false;
//     }
//     else
//     {
//         if (a.second < b.second)
//             return true;

//         else
//             false;
//     }
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         in(n);
//         vector<pair<int, int>> v;
//         for (int i = 0; i < n; i++)
//         {
//             pair<int, int> temp;
//             int x, y;
//             cin >> x >> y;
//             temp = make_pair(x, y);
//             v.pb(temp);
//         }
//         for (int i = 0; i < (n - 1); i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (should_i_swap(v[i], v[j]))
//                 {
//                     swap(v[i], v[j]);
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << v[i].first << " " << v[i].second << endl;
//         }
//     }

//     return 0;
// }

// code=4()

//-------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------------------------------
#define ll long long
#define nl cout << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vl vector<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define msl map<string, ll>
#define mls map<ll, string>
#define umll unordered_map<ll, ll>
#define umsl unordered_map<string, ll>
#define umls unordered_map<ll, string>
#define sl set<ll>
#define ss set<string>
#define usl unordered_set<ll>
#define uss unordered_set<string>
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define fo(i, a, n) for (ll i = a; i < n; i++)
//-------------------------------------------------------------------------------------------------
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
    {
        if (a.second > b.second)
            return false;
    }
    if (a.first > b.first)
    {
        return false;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto val : a)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}