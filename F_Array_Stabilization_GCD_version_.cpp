#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(int n, vector<int> a)
{
    while (n--)
    {
        for (int i = 0; i < a.size() - 1; i++)
        {
            a[i] = __gcd(a[i], a[i + 1]);
        }
        a[a.size() - 1] = a[0];
    }
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    if (mx == mn)
        return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        int hi = 10 ^ 9, lo = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[n] = a[0];
        }
        int ans = 0;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (check(mid, a))
            {
                hi = mid - 1;
                ans = mid;
            }
            else
            {
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
}