// //Hackerrank problem=====https://www.hackerrank.com/challenges/cpp-maps/problem

// // In the name of God.
// // We're nothing and you're everything.
// //Ya Smruti!
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
//     ll n;
//     in(n);
//     unordered_map<string, int> m;
//     fo(i, n)
//     {
//         int k;
//         in(k);
//         string str;
//         cin >> str;
//         if (k == 1)
//         {
//             int b;
//             in(b);

//             m[str] += b;
//         }
//         else if (k == 2)
//         {
//             m.erase(str);
//             m[str] = 0;
//         }
//         else if (k == 3)
//         {
//             // auto it = m.find(str);
//             // cout << it->second << endl;
//             cout << m[str] << endl;
//         }
//     }

//     return 0;
// }

// gfg qs = https://practice.geeksforgeeks.org/problems/twice-counter4236/1

// int countWords(string list[], int n)
// {
//     int count = 0;
//     unordered_map<string, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         m[list[i]]++;
//         if (m[list[i]] == 2)
//         {
//             count++;
//         }
//     }
//     return count;
// }
