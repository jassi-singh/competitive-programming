#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        string ans = "ON";
        cin >> n >> k;
        if (k == 0)
        {
            int initial_state = 4;
            int final_state = initial_state + n % 4;
            if (final_state == 4)
            {
                ans = "Off";
            }
            else
            {
                ans = "On";
            }
        }
        else if (n%4 == 0)
        {
            if (k == 0)
            {
                ans = "Off";
            }
            else
                ans = "On";
        }
        else
        {
            ans = "Ambiguous";
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