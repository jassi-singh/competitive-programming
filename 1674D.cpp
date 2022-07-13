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
        vector<int> a(n), b, c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = a.size() - 1; i >= 0; i--)
        {
            b.insert(b.begin() + (a.size() - i) / 2, a[i]);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i <= n / 2; i++)
        {
            if (i == n - i - 1)
                c.push_back(b[i]);
            else if (b[i] > b[n - i - 1])
            {
                c.push_back(b[i]);
                c.push_back(b[n - i - 1]);
            }
            else
            {
                c.push_back(b[n - i - 1]);
                c.push_back(b[i]);
            }
        }
        reverse(c.begin(), c.end());
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << endl;
        }

        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i])
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}