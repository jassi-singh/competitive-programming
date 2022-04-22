#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> vec(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int x;
        cin >> x;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            vec[i] = vec[i] & x;
            mp[vec[i]]++;
        }
        for (auto m : mp)
        {
            ans += m.second * m.second;
        }
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