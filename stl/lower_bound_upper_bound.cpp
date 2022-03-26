// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
//     cout << endl;
//     int *ptr = lower_bound(a, a + n, 5); //5
//     cout << (*ptr) << endl;
//     ptr = lower_bound(a, a + n, 6); //7
//     cout << (*ptr) << endl;
//     ptr = lower_bound(a, a + n, 9); //25
//     cout << (*ptr) << endl;
//     ptr = lower_bound(a, a + n, 3); //4
//     cout << (*ptr) << endl;
//     ptr = lower_bound(a, a + n, 26); //nth position

//     // if (ptr == (a + n))
//     // {
//     //     cout << "Not found";
//     //     return 0;
//     // }
//     cout << (*ptr) << endl;
//     int *ctr = upper_bound(a, a + n, 7);
//     cout << (*ctr) << endl;
//     ctr = upper_bound(a, a + n, 5);
//     cout << *ctr << endl;
//     ctr = upper_bound(a, a + n, 26); //nth element

//     cout << *ctr;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         cin >> k;
//         v.push_back(k);
//     }
//     sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << endl;
//     }
//     cout << endl;
//     auto it = upper_bound(v.begin(), v.end(), 5);
//     cout << (*it) << endl;

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int n;
//     cin >> n;
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         cin >> k;
//         s.insert(k);
//     }
//     auto it = upper_bound(s.begin(), s.end(), 5); //This is of time o(n). sssso it is not reccomendeing
//     cout << *it << endl;
//     it = s.lower_bound(7); //o(logn)
//     cout << *it << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int j, k;
        cin >> j >> k;
        m[j] = k;
    }
    for (auto &val : m)
    {
        cout << val.first << " " << val.second << endl;
    }

    cout << endl;
    // auto it = lower_bound(m.begin(), m.end(), 5);
    auto it = m.begin();
    cout << it->first << " " << it->second << endl;
    it = m.lower_bound(5);
    cout << it->first << " " << it->second << endl;

    return 0;
}
//The lower bound function gives the value if the input is present in the array and
// if it is not present then the function returns the next element. If the element is the last element in the array then the
//  it resturns the just next elements pointer.

//The upper bound function always gives the next greater elements
// and if the next greater element is not present in the array then it returns he next elements arrey.
