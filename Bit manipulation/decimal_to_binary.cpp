// code-1
// =========

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ll n, flag = 0;
//     cin >> n;

//     for (int i = 31; i >= 0; i--)
//     {
//         if (n & (1 << i))
//         {

//             cout << "1";
//             flag = 1;
//         }
//         else if (flag == 1)
//             cout << "0";
//     }
//     return 0;
// }

// code=2
//========

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     ll n;
//     cin >> n;
//     vector<int> v(32);
//     int i = 0;
//     for (i = 0; n > 0; i++)
//     {
//         v[i] = n % 2;
//         n /= 2;
//     }
//     for (int j = i - 1; j >= 0; j--)
//         cout << v[j];

//     return 0;
// }

// code 3(BUG in pow func)
//=============

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// int power(int n, int m)
// {
//     int result;
//     if (m == 0)
//         return 1;
//     int temp = power(n, m / 2);
//     result = temp * temp;
//     if (m % 2 == 1)
//         result *= n;
//     return result;
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ll n;
//     cin >> n;
//     ll b_num = 0, count = 0;
//     while (n > 0)
//     {
//         int rem = n % 2;
//         ll c = power(10, count);
//         b_num += (rem * c);
//         count++;
//         n /= 2;
//     }
//     cout << b_num << endl;

//     return 0;
// }

// code 4
//========

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ll n;
//     cin >> n;
//     ll b_num = 0, i = 1;
//     while (n > 0)
//     {
//         b_num = b_num + i * (n % 2);
//         i *= 10;
//         n /= 2;
//     }
//     cout << b_num << endl;
//     return 0;
// }

// code 5
