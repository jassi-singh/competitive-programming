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
        int e, o, f, l;
        e = o = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (i == 0)
                f = c % 2;
            if (i == n - 1)
                l = c % 2;
            if (c % 2 == 0)
                e++;
            else
                o++;
        }
        if (f == l)
            cout << (f == 1 ? o - 1 : e - 1) << endl;
        else
            cout << (f == 0 ? o : e) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}