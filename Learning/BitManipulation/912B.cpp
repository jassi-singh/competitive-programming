#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  unsigned ll n, k, ans = 0;
  cin >> n >> k;
  bitset<64> b(n);
  bool flag = 0;
  for (int i = b.size() - 1; i >= 0; i--)
  {
    if (flag)
    {
      b[i] = '1';
    }
    if (b[i] == 1)
    {
      flag = 1;
    }
  }
  if (k != 1)
    cout << b.to_ullong();
  else
    cout << n;
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