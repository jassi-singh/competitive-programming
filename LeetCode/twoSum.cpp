#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> solve(vector<int> nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        if (nums[l] + nums[r] == target)
            return {l + 1, r + 1};
        else if (nums[l] + nums[r] > target)
            r--;
        else
            l++;
    }
    return {};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
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
        int target;
        cin >> target;
        vector<int> ans = solve(nums, target);
        for (int a : ans)
            cout << a << " ";
    }
    return 0;
}