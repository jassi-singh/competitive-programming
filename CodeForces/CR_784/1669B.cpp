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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int ans = -1;
        for (auto i : mp)
        {
            if (i.second >= 3)
            {
                ans = i.first;
                break;
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