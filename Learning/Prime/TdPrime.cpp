#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  vector<bool> a(1e8 + 1, 1);
  a[0] = 0;
  for (ll i = 2; i * i <= 1e8 + 1; i++)
  {
    if (a[i - 1])
    {
      for (ll j = i * i; j <= 1e8 + 1; j += i)
      {
        a[j - 1] = 0;
      }
    }
  }

  ll l = 0;
  for (ll i = 0; i < a.size(); i++)
  {
    if (a[i])
    {
      l++;
      if (l % 100 == 1)
        cout << i + 1 << endl;
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