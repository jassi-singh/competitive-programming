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
        string a, t;
        cin >> a >> t;
        if (t.find('a') == string::npos)

            cout << (ll)pow(2, a.length()) << endl;
        else if (t.length() == 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}