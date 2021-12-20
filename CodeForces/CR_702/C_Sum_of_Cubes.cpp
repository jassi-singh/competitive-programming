#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkCube(ll a)
{
    ll cbr = ceil(cbrt(a));
    return cbr * cbr * cbr == a;
}
void solve(ll n)
{
    ll k = ceil(cbrt(n));
    for (ll i = 1; i < k; i++)
    {
        ll y = n - i * i * i;
        if (checkCube(y))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
}