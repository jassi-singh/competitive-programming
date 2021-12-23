#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> solve(vector<int> nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        auto it = find(nums.begin() + i + 1, nums.end(), target - nums[i]);
        if (it != nums.end() && i != int(it - nums.begin()))
        {
            vector<int> ans{i, int(it - nums.begin())};
            return ans;
        }
    }
    vector<int> ans{0, 0};
    return ans;
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