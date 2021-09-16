#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ll N, A, B, C;

ll solve(ll E, ll H, ll i, ll p,ll dp)
{
    if(p>=dp)
        return dp;
    
    if (E < 0 || H < 0)
    {
        return LONG_LONG_MAX;
    }
    
    if (i == N)
    {
        dp = p;
        return p;
    }

    return min(solve(E - 1, H - 1, i + 1, p + C,dp),min(solve(E - 2, H, i + 1, p + A,dp), solve(E, H - 3, i + 1, p + B,dp)));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll E, H;
        cin >> N >> E >> H >> A >> B >> C;
        ll dp = LONG_LONG_MAX;
        ll ans = solve(E, H, 0, 0,dp);
        if (ans == LONG_LONG_MAX)
        {
            cout << -1 << endl;
        }
        else
            cout << ans << endl;
    }
    return 0;
}