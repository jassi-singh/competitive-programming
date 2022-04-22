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
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                b[i] = a[i];
            else
                b[i] = b[i - 1] + a[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
                c[i] = a[i];
            else
                c[i] = c[i + 1] + a[i];
        }
        int ans = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (b[i] == c[j])
            {
                ans = i + n - j + 1;
            }
            if (b[i] > c[j])
                j--;
            else if (b[i] < c[j])
                i++;
            else
            {
                i++;
                j--;
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}