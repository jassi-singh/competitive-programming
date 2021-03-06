#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  ll n, m, k, ans = 0;
  cin >> n >> m >> k;
  vector<ll> e(n);
  for (int i = 0; i < n; i++)
  {
    cin >> e[i];
  }
  sort(e.rbegin(), e.rend());
  ans = m / (k + 1) * (e[0] * k + e[1]) + m % (k + 1) * e[0];
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