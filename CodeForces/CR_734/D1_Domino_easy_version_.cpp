#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, k;

void solve()
{
    if (n % 2 == 0 && m % 2 == 0)
    {
        if (k >= 0 && k <= n * m / 2 && k % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    else if (n % 2 != 0 && m % 2 == 0)
    {
        if ((k - m / 2) >= 0 && (k - m / 2) <= n * m / 2 && (k - m / 2) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    else if (n % 2 == 0 && m % 2 != 0)
    {
        if (k >= 0 && k <= n * (m - 1) / 2 && k % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        solve();
    }
}