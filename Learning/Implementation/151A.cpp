#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  cout << min(k * l / nl, min(c * d, p / np)) / n;
}
int main()
{
#ifndef ONLINE_JUDGE
  // For getting input from input.txt file
  freopen("input.txt", "r", stdin);
  // Printing the Output to output.txt file
  freopen("output.txt", "w", stdout);
#endif
  solve();
  return 0;
}