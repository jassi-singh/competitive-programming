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
        int n, k;
        cin >> n >> k;
        vector<int> m(k);
        int c = 0;
        for (int i = 0; i < k; i++)
            cin >> m[i];
        sort(m.rbegin(), m.rend());
        int ans = 0;
        for (auto mi : m)
        {
            if (c < mi)
            {
                ans++;
                c += n - mi;
            }
        }
        cout << ans << endl;
    }
}