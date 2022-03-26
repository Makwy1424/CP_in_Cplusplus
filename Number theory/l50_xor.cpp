#include <bits/stdc++.h>
using namespace std;

// When two numbers are same the xor is zero otherwise 1.

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a = 4, b = 6;
    cout << (a ^ b) << endl;

    // Swaping using xor;
    int temp = a;
    a ^= (a ^ b);    // a=a^(a^b)
    b ^= (temp ^ b); // b=b^(a^b)
    cout << a << " and " << b << endl;

    // If there is an element in an array which occurs
    // odd times and all other elements present even times
    // make xor of all numbers.
    return 0;
}