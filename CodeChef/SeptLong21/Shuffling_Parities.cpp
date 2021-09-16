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
        int n, ans = 0;
        cin >> n;
        int odds = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k % 2 == 0)
                even++;
            else
                odds++;
        }
        ans += min(n / 2, odds);
        if (n % 2 == 0)
            ans += min(n / 2, even);
        else
            ans += min(n / 2 + 1, even);
        cout << ans << endl;
    }
}