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
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
      int k;
      cin >> k;
      if (i % 2 == 0 && k % 2 != 0)
      {
        a++;
      }
      else if (i % 2 != 0 && k % 2 == 0)
      {
        b++;
      }
    }
    if (a == b)
      cout << a;
    else
      cout << -1;
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