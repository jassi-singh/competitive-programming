#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        bool swapped = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            if (i != 0 && a[i] < a[i - 1] && !swapped)
            {
                swap(a[i], a[i - 1]);
                swapped = true;
            }
        }
        sort(b.begin(), b.end());
        string ans = "YES\n";
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                ans = "NO\n";
                break;
            }
        }
        cout << ans;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}