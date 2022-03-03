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
    vector<int> ans;
    int i = 0;
    while (n)
    {
      int r = n % 10;
      if (r)
      {
        ans.push_back(r * pow(10, i));
      }
      i++;
      n = n / 10;
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << ' ';
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