#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int x, y;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      int v;
      cin >> v;
      if (v == 1)
      {
        x = i;
        y = j;
      }
    }
  }
  cout << abs(2 - x) + abs(2 - y);
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