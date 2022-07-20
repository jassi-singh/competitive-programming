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
        int first, last;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
                first = i;
            else if (a == n)
                last = i;
        }
        int ans = first;
        if (last < first)
            ans += n - 2 - last;
        else
            ans += n - 1 - last;
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