#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int l, r;
    cin >> l >> r;
    if (2 * l > r)
    {
      cout << -1 << " " << -1 << endl;
    }
    else
    {
      cout << l << " " << 2 * l << endl;
    }
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