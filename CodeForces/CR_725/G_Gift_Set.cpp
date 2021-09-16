#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a, b;
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y >> a >> b;
        ll ans;
        if (x == y)
        {
            if (x >= a && x >= b)
                ans = min(x / a, x / b);
            else
                ans = 0;
        }
        else
            ans = solve(x, y);
        cout << ans << endl;
    }
}