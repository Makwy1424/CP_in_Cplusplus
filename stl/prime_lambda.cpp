#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if (n == 0 || n == 1)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0 && n != i)
                return false;
        }
        return true;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {2, 3, 5, 7, 9};
    cout << all_of(v.begin(), v.end(), is_prime);

    return 0;
}