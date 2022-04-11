#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  vector<char> v;
  string s;
  cin >> s;
  v.push_back(s[0]);
  for (int i = 1; i < s.length(); i++)
  {
    if (v.back() == s[i])
    {
      v.pop_back();
    }
    else
    {
      v.push_back(s[i]);
    }
  }
  if (v.size() != 0)
    cout << "No";
  else
    cout << "Yes";
  cout << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
// #ifndef ONLINE_JUDGE
//   // For getting input from input.txt file
//   freopen("input.txt", "r", stdin);
//   // Printing the Output to output.txt file
//   freopen("output.txt", "w", stdout);
// #endif
  solve();
  return 0;
}