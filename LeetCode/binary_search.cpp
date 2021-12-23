#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] > target)
            r = mid - 1;
        else if (nums[mid] < target)
            l = mid + 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        cout << solve(nums, target) << endl;
    }
    return 0;
}