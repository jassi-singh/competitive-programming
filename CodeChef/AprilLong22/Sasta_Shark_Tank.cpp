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
        int a, b;
        cin >> a >> b;
        if (a * 10 > b * 5)
            cout << "FIRST\n";
        else if (a * 10 < b * 5)
            cout << "SECOND\n";
        else
            cout << "ANY\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}