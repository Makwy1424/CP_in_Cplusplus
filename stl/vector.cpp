// // In the name of God.
// // We're nothing and you're everything.
// //Ya Smruti!
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define in(n) cin >> n;
// #define fo(i, n) for (ll i = 0; i < n; i++)

// void printvec(vector<string> &v)
// {
//     cout << "size: " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
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

//     int n;
//     cin >> n;
//     vector<string> v;
//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;
//         v.push_back(str);
//     }
//     printvec(v);
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
// #define fo(i, n) for (ll i = 0; i < n; i++)
// void printvec(vector<pair<int, int>> &v)
// {
//     cout << "size: " << v.size() << endl;
//     fo(i, v.size())
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     cout << endl;
// }
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
//     vector<pair<int, int>> v;

//     fo(i, n)
//     {
//         int n, m;
//         cin >> n >> m;
//         v.pb({n, m});
//     }
//     printvec(v);

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
// #define fo(i, n) for (ll i = 0; i < n; i++)
// void printvec(vector<int> &v)
// {
//     cout << "size: " << v.size() << endl;
//     fo(i, v.size())
//     {
//         cout << " " << v[i] << endl;
//     }
//     cout << endl;
// }
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
//     vector<int> v[n];
//     fo(i, n)
//     {
//         int x;
//         cin >> x;
//         fo(j, x)
//         {
//             int p;
//             cin >> p;
//             v[i].pb(p);
//         }
//     }

//     fo(i, n)
//         printvec(v[i]);

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
// #define fo(i, n) for (ll i = 0; i < n; i++)
// void printvec(vector<int> &v)
// {
//     cout << "size: " << v.size() << endl;
//     fo(i, v.size())
//     {
//         cout << " " << v[i] << endl;
//     }
//     cout << endl;
// }
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
//     vector<vector<int>> v;
//     fo(i, n)
//     {
//         int x;
//         in(x);
//         v.pb(vector<int>());
//         fo(j, x)
//         {
//             int t;
//             in(t);
//             v[i].pb(t);
//         }
//     }
//     fo(i, n)
//     {
//         printvec(v[i]);
//     }
//     return 0;
// }
