#include <bits/stdc++.h>
using namespace std;
void solve(int a, int *num)
{
    int result = 0;
    for (int i = 0; i < a - 1; i++)
        result += (i + 1) - num[i];
    printf("%d", result + a);
}
int main()
{
    int a;
    if (scanf("%d", &a) == 1)
    {
        int num[a], i = 0;
        while (i < a - 1)
        {
            if (scanf("%d", &num[i]) == 1)
                i++;
        }
        solve(a, num);
    }
    return 0;
}