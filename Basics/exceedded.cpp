//syntax for macro: #define name(argument) value
#include <bits/stdc++.h>
using namespace std;
#define area(l, b) l + b
#define multiplication(a, n) a *n

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", area(a, b));
    printf("%d", multiplication(a, b));
    return 0;
}