#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        ll a, b;
        ll total = accumulate(h.begin(), h.end(), 0ll);
        ll coin = LONG_LONG_MAX;
        cin >> a >> b;
        int lo = 0, hi = n;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 1;
            ll currcoin = 0;
            if (a - h[mid] > 0)
            {
                currcoin += a - h[mid];
                lo = mid + 1;
            }
            if (b - total + h[mid] > 0)
            {
                currcoin += b - total + h[mid];
            }
            if(currcoin>coin)
            {
                lo=mid+1;
            }else{
                hi = mid-1;
                coin = currcoin;
            }
        }
        cout << coin << endl;
    }
}