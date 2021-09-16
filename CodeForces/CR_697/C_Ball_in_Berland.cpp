#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        vector<ll> m, f;
        map<ll, ll> boy, girl;s
        for (ll i = 0; i < k; i++)
        {
            ll p;
            cin >> p;
            m.push_back(p);
            if (boy.find(p) == boy.end())
                boy[p] = 1;
            else
                boy[p]++;
        }
        for (ll i = 0; i < k; i++)
        {
            ll p;
            cin >> p;
            f.push_back(p);
            if (girl.find(p) == girl.end())
                girl[p] = 1;
            else
                girl[p]++;
        }
        ll ans = 0;
        for (ll i = 0; i < k; i++)
        {
            ans += k - boy[m[i]] - girl[f[i]] + 1;
        }
        ans /= 2;
        cout << ans << endl;
    }
}