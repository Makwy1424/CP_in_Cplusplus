#include <bits/stdc++.h>
using namespace std;

// Swap  using XOR
void swapNum(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

int main()
{

    // Xor things.
    int a, b;
    cin >> a >> b;
    swapNum(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}