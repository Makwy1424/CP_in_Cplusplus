#include <bits/stdc++.h>
using namespace std;

int main()
{

    double x;
    cin >> x;
    if (x == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    double eps = 1e-6;
    double hi = x, lo = 1, mid;

    while (hi - lo > eps)
    {
        mid = (hi + lo) / 2;
        if (mid * mid < x)
        {
            lo = mid + eps;
        }
        else
        {
            hi = mid;
        }
    }
    cout << "Answer = " << int(lo) << endl;
    cout << "The sqrt value till 6th place: " << setprecision(10) << lo << endl;
    cout << "The sqrt of number by pow function: " << pow(x, 1.0 / 2) << endl;
    return 0;
}
