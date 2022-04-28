#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
ll solveOne(string s, ll n, ll k)
{
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1' && k > 0)
        {
            s[i] = '0';
            k--;
        }
    }
    vector<ll> cnt(n, 0);
    if (s[n - 1] == '0')
        cnt[n - 1] = 1;
    ll ans = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s[i] == '0')
            cnt[i] = cnt[i + 1] + 1;
        else
        {
            cnt[i] = cnt[i + 1];
            ans += cnt[i];
        }
    }
    return ans;
}
ll solveZero(string s, ll n, ll k)
{
    for (ll i = n-1; i >=0; i--)
    {
        if (s[i] == '0' && k > 0)
        {
            s[i] = '1';
            k--;
        }
    }
    vector<ll> cnt(n, 0);
    if (s[n - 1] == '0')
        cnt[n - 1] = 1;
    ll ans = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s[i] == '0')
            cnt[i] = cnt[i + 1] + 1;
        else
        {
            cnt[i] = cnt[i + 1];
            ans += cnt[i];
        }
    }
    return ans;
}
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll ans = min(solveOne(s, n, k), solveZero(s, n, k));
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}