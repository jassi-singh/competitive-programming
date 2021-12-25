#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int last = n-1;
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]+i>=last)
            last = i;
    }
    return last<=0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << canJump(nums);
    return 0;
}