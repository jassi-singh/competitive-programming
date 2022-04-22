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
        string s;
        cin >> s;
        string ans = "YES";
        int b = 0, r = 0;
        for (char c : s)
        {
            if (c == 'B')
                b++;
            if (c == 'R')
                r++;
            if (c == 'W')
            {
                if ((b > 0 && r > 0) || (b == 0 && r == 0))
                {
                    b = 0;
                    r = 0;
                }
                else
                {
                    ans = "NO";
                    break;
                }
            }
        }
        if ((b > 0 && r > 0) || (b == 0 && r == 0))
        {
            b = 0;
            r = 0;
        }
        else
        {
            ans = "NO";
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