#include <bits/stdc++.h>
using namespace std;

int dp[10010];
int func(vector<int> &coins, int amount) // It returns minimum number of coins
// required to sum of the amount.
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];

    int ans = INT_MAX;
    for (auto coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(coins, amount - coin) + 1LL);
    }
    return dp[amount] = ans;
}

int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(coins, amount);
    return ((ans != INT_MAX) ? ans : -1);
}
int main()
{

    vector<int> coins = {1, 2, 5};
    int amount = 11;
    cout << coinChange(coins, amount);
    return 0;
}