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
        ll x, n, ans;
        cin >> x >> n;

        if (x % 2 == 0)
        {
            switch (n % 4)
            {
            case 0:
                ans = 0LL + x;
                break;
            case 1:
                ans = -1LL - floor((double)n / (double)4LL) * 4LL + x;
                break;
            case 2:
                ans = 1LL + x;
                break;
            case 3:
                ans = (n / 4LL + 1LL) * 4LL + x;
                break;
            }
        }
        else
        {
            switch (n % 4)
            {
            case 0:
                ans = 1LL + x - 1LL;
                break;
            case 3:
                ans = 1LL - (ll)ceil((double)n / (double)4LL) * 4LL + x - 1LL;
                break;
            case 2:
                ans = 0LL + x - 1LL;
                break;
            case 1:
                ans = (ll)floor((double)n / (double)4) * 4LL + 2LL + x - 1LL;
                break;
            }
        }
        cout << ans << endl;
    }
}