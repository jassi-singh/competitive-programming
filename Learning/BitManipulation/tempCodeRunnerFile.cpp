#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> v;
int n;
bool ans = false;
void solve(int i)
{
  if (i == 16)
    return;
  int sum = 0;
  bitset<16> b(i);
  for (int j = 0; j < n; j++)
  {
    if (b[j])
      sum += v[j];
    else
      sum -= v[j];
  }
  if (sum % 360 == 0)
  {
    ans = true;
    return;
  }
  solve(i + 1);
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
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }
  solve(0);
  if (ans)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}