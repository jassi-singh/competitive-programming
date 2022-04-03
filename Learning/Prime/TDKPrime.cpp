#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 88888888
vector<bool> sieve(N + 1, 1);
vector<int> primes;
void solve()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    int i;
    cin >> i;
    cout << primes[i - 1] << endl;
  }
}
int main()
{
  sieve[0] = 0;
  for (int i = 2; i * i <= N; i++)
  {
    if (sieve[i - 1])
    {
      for (int j = i * i; j <= N; j += i)
      {
        sieve[j - 1] = 0;
      }
    }
  }

  for (int i = 0; i <= N; i++)
  {
    if (sieve[i])
      primes.push_back(i + 1);
  }

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