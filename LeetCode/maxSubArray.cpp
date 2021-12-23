#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> &nums)
{
    int ans = nums[0];
    int curr_sum = 0;
    for (int n : nums)
    {
        curr_sum += n;
        if (curr_sum > ans)
            ans = curr_sum;
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        nums.push_back(v);
    }
    cout << solve(nums) << endl;
    return 0;
}