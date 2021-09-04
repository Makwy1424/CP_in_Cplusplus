// // In the name of God.
// // We're nothing and you're everything.
// //Ya Smruti!
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
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

//     map<int, string> m;
//     m[3] = "Smruti";
//     m[6] = "ranjan";
//     m[8] = "rout";
//     m.insert({4, "My name is you now"});
//     for (auto it = m.begin(); it != m.end(); it++)
//     {
//         cout << it->first << " " << it->second << endl;
//     }
//     for (auto &value : m)
//     {
//         cout << value.first << " " << value.second << endl;
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

//     map<int, string> m;
//     m[3] = "Smruti";
//     m[6] = "ranjan";
//     m[8] = "rout";
//     m.insert({4, "My name is you now"});

//     for (auto it = m.find(3); it != m.end(); it++)
//     {
//         if (it == m.end())
//             cout << "No value";
//         else
//             cout << it->first << " " << it->second << endl;
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
//     in(n);
//     map<string, int> y;
//     fo(i, n)
//     {
//         string str;
//         in(str);
//         // y[str]++;
//         y.insert({str, y[str]++}); //herre =the str is a key we just open the lock m[j] by this handy way.
//     }
//     for (auto &pr : y)
//     {
//         cout << pr.first << " " << pr.second << endl; //here the pr is nothing but a pair.
//     }
//     for (auto it = y.begin(); it != y.end(); it++) //The it is the iterator

//     {
//         cout << it->first << " " << it->second << endl;
//     }

//     return 0;
// }

//range based loop and the second one is the iterative way to do that.

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
    in(n);

    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        m[str]++;
    }
    int q;
    in(q);
    fo(i, q)
    {
        string ste;
        in(ste);
        cout << m[ste] << endl;
    }

    return 0;
}