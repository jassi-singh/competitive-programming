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
        string s;
        cin >> s;
        char a;
        cin >> a;
        bool f = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == a && i % 2 == 0)
                f = true;
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}