#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, ll> ac;
        vector<ll> a(k);
        for (int i = 0; i < n; i++)
            ac[i] = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            ll t;
            cin >> t;
            ac[a[i] - 1] = t;
        }
        ll r[n];
        r[0] = ac[0];
        for (int i = 1; i < n; i++)
        {
            r[i] = min(ac[i], r[i - 1] + 1);
        }
        ll l[n];
        l[n - 1] = ac[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            l[i] = min(ac[i], l[i + 1] + 1);
        }
        for (int i = 0; i < n; i++)
            cout << min(r[i], l[i]) << " ";
        cout << endl;
    }
}