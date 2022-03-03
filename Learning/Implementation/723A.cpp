#include <bits/stdc++.h>
using namespace std;
#define ll long long
int host(int h, int f, int s)
{
  return abs(h - f) + abs(h - s);
}
void solve()
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << min(host(a, b, c), min(host(b, c, a), host(c, a, b)));
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