#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    if (n % 2 == 0 || m % 2 == 0)
    {
      cout << n * m / 2 << endl;
    }
    else
    {
      cout << n * (m - 1) / 2 + (n + 1) / 2 << endl;
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