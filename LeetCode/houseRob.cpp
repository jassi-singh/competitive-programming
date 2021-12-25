#include <bits/stdc++.h>
using namespace std;
#define ll long long
int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    int prev2 = nums[0], prev = max(prev2, nums[1]);
    int curr = max(prev2, prev);
    for (int i = 2; i < n; i++)
    {
        curr = max(prev2 + nums[i], prev);
        prev2 = prev;
        prev = curr;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums1(n - 1), nums2(n - 1);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        if (i != 0)
            nums1[i]=k;
        if (i != n - 1)
            nums2[i]=k;
    }

    cout << max(rob(nums1), rob(nums2));
    return 0;
}