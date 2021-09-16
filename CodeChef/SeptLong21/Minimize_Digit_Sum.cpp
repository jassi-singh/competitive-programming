#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fastExpo(ll a, ll n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
    {
        return fastExpo(a * a, n / 2);
    }
    return a * fastExpo(a, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r,ans = -1;
        cin >> n >> l >> r;
        for (ll i = l; i <= r; i++)
        {
            
        }
        cout << ans << endl;
    }
}