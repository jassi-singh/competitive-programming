#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> solve(vector<int> nums1, vector<int> nums2)
{
    vector<int> ans;
    for (int i : nums1)
    {
        auto it = find(nums2.begin(), nums2.end(), i);
        if (it != nums2.end())
        {
            *it = -1;
            ans.push_back(i);
        }
    }
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
        int n, m;
        cin >> n >> m;
        vector<int> nums1, nums2;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            nums1.push_back(v);
        }
        for (int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            nums2.push_back(v);
        }
        vector<int> ans = solve(nums1, nums2);
        for (int a : ans)
            cout << a << " ";
    }
    return 0;
}