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

    vector<int> v = {-2, -4, -5, -6, -6, -4};
    cout << any_of(v.begin(), v.end(), [](int n)
                   { return n > 0; })
         << endl;

    v.push_back(1);
    cout << any_of(v.begin(), v.end(), is_positive);

    return 0;
}
