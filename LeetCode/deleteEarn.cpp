#include <bits/stdc++.h>
using namespace std;
#define ll long long
int deleteAndEarn(vector<int> &nums)
{
    int n = nums.size();
    vector<int> points(*max_element(nums.begin(), nums.end()), 0);
    for (int i : nums)
        points[i - 1] += i;
    if (points.size() == 1)
        return points[0];
    int prev2 = points[0], prev = max(prev2, points[1]), curr = max(prev2, prev);
    for (int i = 2; i < points.size(); i++)
    {
        curr = max(prev2 + points[i], prev);
        prev2 = prev;
        prev = curr;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        nums[i] = k;
    }

    cout << deleteAndEarn(nums);
    return 0;
}