#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n, r;
    cin >> n >> r;
    int ans = 10;
    for (int i = 1; i <= 9; i++)
    {
      if (n * i % 10 == r || n * i % 10 == 0)
      {
        ans = i;
        break;
      }
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