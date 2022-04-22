#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long

long long merge(long long *arr, long long *temp, long long l, long long mid, long long r)
{
    long long i, j, k, inv_count = 0;
    i = l, j = mid, k = l;
    while ((i <= mid - 1) && (j <= r))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
    {
        arr[i] = temp[i];
    }
    return inv_count;
}

long long mergeSort(long long *arr, long long *temp, long long l, long long r)
{
    long long inv_count = 0;
    if (l < r)
    {
        long long mid = (l + r) / 2;
        inv_count += mergeSort(arr, temp, l, mid);
        inv_count += mergeSort(arr, temp, mid + 1, r);

        inv_count += merge(arr, temp, l, mid + 1, r);
    }

    return inv_count;
}

ll solve(ll *arr, int n)
{
    long long temp[n];
    long long ans = mergeSort(arr, temp, 0, n - 1);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll nums[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums[i] = a;
    }
    cout << solve(nums, n);
    return 0;
}