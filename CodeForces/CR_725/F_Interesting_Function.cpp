#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<int, ll> dp;
ll digitChange(ll n)
{
    if (n == 0)
        return 0;
    if (dp[n] != 0)
        return dp[n];
    return dp[n] = n + digitChange(n / 10);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = digitChange(r) - digitChange(l);
        cout << ans << endl;
    }
}