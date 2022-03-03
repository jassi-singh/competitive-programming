#include <bits/stdc++.h>
using namespace std;
#define ll long long
int faces(string s)
{
  if (s == "Tetrahedron")
    return 4;
  if (s == "Cube")
    return 6;
  if (s == "Octahedron")
    return 8;
  if (s == "Dodecahedron")
    return 12;
  if (s == "Icosahedron")
    return 20;
  return 0;
}
void solve()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
      string s;
      cin >> s;
      ans += faces(s);
    }
    cout << ans;
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