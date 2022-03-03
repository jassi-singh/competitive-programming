#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n / 2 % 2 == 0)
    {
      cout << "YES\n";
      int evnSum = 0, oddSum = 0;
      for (int i = 1; i <= n / 2; i++)
      {
        cout << 2 * i << " ";
        evnSum += 2 * i;
      }
      for (int i = 1; i < n / 2; i++)
      {
        cout << 2 * i - 1 << " ";
        oddSum += 2 * i - 1;
      }
      cout << evnSum - oddSum << endl;
    }
    else
    {
      cout << "NO" << endl;
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