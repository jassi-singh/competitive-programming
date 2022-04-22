#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ceil(x, y) ceil((double)x / (double)y)
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int cap;
            cin >> cap;
            mn = min(mn, cap);
        }
        cout << max((int)ceil(a, mn), n) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}