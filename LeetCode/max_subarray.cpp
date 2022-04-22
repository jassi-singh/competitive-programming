#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> &nums)
{
    int sum = 0;
    int ans = nums[0];
    for (int num : nums)
    {
        sum += num;
        if (sum > ans)
        {
            ans = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    solve(nums);
    return 0;
}