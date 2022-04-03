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
    vector<int> cnt(32, 0), ans;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      bitset<32> b(a);
      for (int j = 0; j < 32; j++)
      {
        if (b[j])
          cnt[j]++;
      }
    }
    for (int i = 1; i <= n; i++)
    {
      bool ok = true;
      for (int j = 0; j < 32; j++)
      {
        if (cnt[j] % i != 0)
        {
          ok = false;
          break;
        }
      }
      if (ok)
        ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << ' ';
    }
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