#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
      cin >> b[i];
    }

    ll h = 1e8;
    ll l = 0;
    while (l <= h)
    {
      ll x = (h + l) / 2;
      ll m = k;
      for (ll i = 0; i < n; i++)
      {
        m -= max(a[i] * x - b[i], 0 * 1ll);
      }
      if (m >= 0)
      {
        ans = x;
        l = x + 1;
      }
      else
      {
        h = x - 1;
      }
    }
    cout << ans << endl;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  // For getting input from input.txt file
  freopen("input.txt", "r", stdin);
  // Printing the Output to output.txt file
  freopen("output.txt", "w", stdout);
#endif
  solve();
  return 0;
}