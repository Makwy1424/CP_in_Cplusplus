#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //This is a inline function

    cout << [](int x)
    { return x + 2; }(4)
         << endl;

    //THe below declaration is also a type of declaration we used to write lambda function
    auto s = [](int x, int y)
    { return x * y; };
    cout << s(2, 3) << endl;

    return 0;
}