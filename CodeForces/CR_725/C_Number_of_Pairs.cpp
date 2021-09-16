#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r, ans = 0;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (ll i = 0; i < n; i++)
        {
            ans += upper_bound(arr.begin(), arr.end(), r - arr[i]) - arr.begin();
            ans -= lower_bound(arr.begin(), arr.end(), l - arr[i]) - arr.begin();
            if (l <= 2 * arr[i] && 2 * arr[i] <= r)
            {
                ans--;
            }
        }
        cout << ans/2 << endl;
    }
}