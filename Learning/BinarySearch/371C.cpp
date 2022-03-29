#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    string ham;
    ll nb, ns, nc, pb, ps, pc, r, ans = 0;
    cin >> ham >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    ll b = count(ham.begin(), ham.end(), 'B');
    ll s = count(ham.begin(), ham.end(), 'S');
    ll c = count(ham.begin(), ham.end(), 'C');

    ll l = 0;
    ll h = 1e13;
    while (l <= h)
    {
      ll x = (h + l) / 2;

      ll cost = max(1ll * 0, b * x - nb) * pb + max(1ll * 0, s * x - ns) * ps + max(1ll * 0, c * x - nc) * pc;
      if(cost<=r)
      {
        ans = max(ans, x);
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