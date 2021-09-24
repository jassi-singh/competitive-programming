#include <bits/stdc++.h>
using namespace std;
#define ll long long
int x, y, a, b;
ll solve(int x, int y)
{
    if (x <= 0 || y <= 0)
        return 0;
    ll m, n;
    if (x >= a && y >= b)
        m = solve(x - a, y - b) + 1;
    else
        m = 0;

    if (y >= a && x >= b)
        n = solve(x - b, y - a) + 1;
    else
        n = 0;

    return max(m, n);
}
int checkMid(ll n)
{
    ll lo = 0, hi = n;
    while (lo <= hi)
    {
        ll s1 = (hi + lo) / 2;
        ll s2 = n - s1;
        ll t1 = a * s1 + b * s2;
        ll t2 = a * s2 + b * s1;
        if (t1 <= x && t2 <= y)
        {
            return 1;
        }
        else if (t1 > x)
        {
            hi = s1 - 1;
        }
        else
        {
            lo = s1 + 1;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b;
        if (a < b)
            swap(a, b);
        if (x < y)
            swap(x, y);
        ll ans = 0;
        ll lo = 1, hi = max(x, y);
        while (lo <= hi)
        {
            ll mid = (hi + lo) / 2;
            if (checkMid(mid))
            {
                ans = max(ans, mid);
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << ans << endl;
    }
}