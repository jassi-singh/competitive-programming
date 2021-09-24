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
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (i != n - 1 && a != '0')
                ans++;
            ans += a - '0';
        }
        cout << ans << endl;
    }
}