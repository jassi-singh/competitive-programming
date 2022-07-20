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
        bool ans = false;
        for (int i = 0; i <= n; i++)
        {
            int l = 0, r = n;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (2 * i + 7 * mid > n)
                    r = mid - 1;
                else if (2 * i + 7 * mid < n)
                    l = mid + 1;
                else
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
                break;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}