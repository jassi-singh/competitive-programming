#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n, ans = 0;
  cin >> n;
  while (n--)
  {
    string c;
    cin >> c;
    if (c[0] == '+' || c[2] == '+')
      ans++;
    else
      ans--;
  }
  cout << ans;
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