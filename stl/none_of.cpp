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
    vector<int> v = {-1, -2, -3, -4};
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x > 0; })
         << endl;
    v.push_back(8);
    cout << none_of(v.begin(), v.end(), is_positive);
    return 0;
}