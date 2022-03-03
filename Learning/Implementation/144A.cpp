#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n;
  cin >> n;
  vector<int> h;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    h.push_back(p);
  }
  auto mx_i = max_element(h.begin(), h.end());
  ans += mx_i - h.begin();
  int mx = *mx_i;
  h.erase(mx_i);
  h.insert(h.begin(), mx);
  auto min_i = min_element(h.rbegin(), h.rend());
  ans += min_i - h.rbegin();
  cout << ans << endl;
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