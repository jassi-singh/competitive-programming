#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int cost = k * x;
    n = n - k;
    cout << cost + n * min(x, y) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}