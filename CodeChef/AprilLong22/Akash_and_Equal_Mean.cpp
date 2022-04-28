#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<double, ll> mp;
        vector<ll> vec(n);
        double x = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
            x += vec[i];
            mp[vec[i]]++;
        }
        x = 2 * x / (double)n;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (x != 2 * vec[i])
                ans += mp[x - vec[i]];
            else
                ans += mp[x - vec[i]] - 1ll;
        }
        cout << ans / 2 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}