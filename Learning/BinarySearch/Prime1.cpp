#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  cin >> t;
  vector<bool> a(100000009, 1);
  a[0] = 0;
  for (ll i = 2; i * i <= 100000009; i++)
  {
    if (a[i - 1])
    {
      for (ll j = i * i; j <= 100000009; j += i)
      {
        a[j - 1] = 0;
      }
    }
  }

  while (t--)
  {
    ll l, h;
    cin >> l >> h;
    for (ll i = l; i <= h; i++)
    {
      if (a[i - 1])
        cout << i << endl;
    }
    cout << endl;
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