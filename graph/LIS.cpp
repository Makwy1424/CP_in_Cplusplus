#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 10;
int dp[N];

int func(int j, vector<int> &nums) // return max no of longest subsequence
{
    if (j == 0)
        return 0;
    if (dp[j] != -1)
        return dp[j];
    int ans = 1;
    for (int i = 0; i < j; i++)
    {
        if (nums[i] < nums[j])
            ans = max(ans, func(i, nums) + 1);
    }
    return dp[j] = ans;
}

int lengthOfLIS(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    int ans = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = max(ans, func(i, nums));
    }
    return ans;
}
int main()
{

    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    int ans = lengthOfLIS(nums);
    cout << ans << endl;

    return 0;
}