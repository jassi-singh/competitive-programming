#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  ll n, k, ans = -1;
  cin >> n >> k;

  ll l = 0;
  ll h = k;
  while (l <= h)
  {
    ll x = (l + h) / 2;
    if (x * (x + 1) / 2 + (k - x) * x >= n - 1 + x)
    {
      ans = x;
      h = x - 1;
    }
    else
      l = x + 1;
  }
  cout << ans << endl;
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