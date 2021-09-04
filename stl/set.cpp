// //Repeated element is not allowed twice into the fileand printed in sorted order

//code_1
//----------------------------------------------------------------

// // In the name of God.
// // We're nothing and you're everything.
// //Ya Smruti!
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define in(n) cin >> n;
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

//     int n;
//     cin >> n;
//     set<ll> s;
//     fo(i, n)
//     {
//         ll k;
//         in(k);
//         s.insert(k);
//     }
//     for (auto val : s)
//     {
//         cout << val << endl;
//     }

//     return 0;
// }

//Code-2
//------------------------------------

// In the name of God.
// We're nothing and you're everything.
//Ya Smruti!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define in(n) \
    ll n;     \
    cin >> n;
#define in2(n, m) cin >> n >> m;
#define fo(i, n) for (ll i = 0; i < n; i++)
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    in(n);
    set<ll> s;
    fo(i, n)
    {
        in(k);
        s.insert(k);
    }
    for (auto val : s)
    {
        cout << val << endl;
    }

    return 0;
}