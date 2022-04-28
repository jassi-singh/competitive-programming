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
        string ans;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c == -1)
                b++;
            else
                a++;
        }
        if (n % 2 == 0)
        {
            if (n / 2 % 2 == 0)
            {
                if (a == n / 2 && b == n / 2)
                    ans = "Yes\n";
                else
                    ans = "No\n";
            }
            else
            {
                if (a >= n / 2 - 1 && b >= n / 2 - 1)
                    ans = "Yes\n";
                else
                    ans = "No\n";
            }
        }
        else
        {
            if (a >= n / 2 && b >= n / 2)
                ans = "Yes\n";
            else
                ans = "No\n";
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