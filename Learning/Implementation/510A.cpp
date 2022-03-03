#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int r, c;
    cin >> r >> c;
    vector<vector<char> > board(r, vector<char>(c, '.'));
    for (int i = 0; i < r; i += 2)
    {
      board[i] = vector<char>(c, '#');
    }
    bool last = true;
    for (int i = 1; i < r; i += 2)
    {
      if (last)
        board[i][c - 1] = '#';
      else
        board[i][0] = '#';
      last = !last;
    }
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        cout << board[i][j];
      }
      cout << endl;
    }
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