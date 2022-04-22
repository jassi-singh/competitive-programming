#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(vector<int> &nums)
{
    int size = nums.size();
    int idx = -1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            idx = i;
            break;
        }
    }
        if(idx!=-1)
    for (int i = size - 1; i > idx; i--)
    {
        if (nums[i] > nums[idx])
        {
            swap(nums[i], nums[idx]);
            break;
        }
    }
    reverse(nums.begin() + idx + 1, nums.end());
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