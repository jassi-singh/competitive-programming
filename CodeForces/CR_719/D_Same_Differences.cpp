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
        int n;
        cin >> n;
        map<int, ll> m;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            m[k - i]++;
        }
        ll ans = 0;
        for (auto a : m)
        {
            ans += (a.second * (a.second - 1)) / 2LL;
        }
        cout << ans << endl;
    }
}