#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
void solve()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    ull n, k, ans = 0, mod = 1000000007;
    cin >> n >> k;
    bitset<32> b(k);
    ull p = 1;
    for (ull i = 0; i < 32; i++)
    {
      if (b[i] == 1)
      {
        ans = (ans + p) % mod;
      }
      p *= n;
      p %= mod;
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