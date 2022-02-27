#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  string n;
  cin >> n;
  for (int i = 0; i < n.length(); i++)
  {
    if (n[i] > '4')
      if (n[i] != '9')
        n[i] = 48 + '9' - n[i];
    if (n[i] == '9' && i != 0)
      n[i] = 48 + '9' - n[i];
  }
  cout << n;
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