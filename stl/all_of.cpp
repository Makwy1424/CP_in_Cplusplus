#include <bits/stdc++.h>
using namespace std;
bool is_positive(int n)
{
    return n > 0;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> v = {1, 3, 7};
    cout << all_of(v.begin(), v.end(), [](int n)
                   { return n > 0; })
         << endl;
    v.push_back(-2);
    cout << all_of(v.begin(), v.end(), is_positive);
    return 0;
}