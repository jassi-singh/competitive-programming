#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    ll l = 0;
    ll h = k;
    while (l <= h)
    {
      ll health = k;
      ll x = (h + l) / 2ll;
      ll t = a[0];
      for (ll i = 0; i < n; i++)
      {
        health -= x - max((t - a[i]), 0 * 1ll);
        t = a[i] + x;
      }
      if (health <= 0)
      {
        ans = x;
        h = x - 1;
      }
      else
        l = x + 1;
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