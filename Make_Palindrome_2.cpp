#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (char c : s)
        if (c == '0')
            a++;
        else
            b++;
    for (int i = 0; i < max(a, b); i++)
        cout << (a > b ? '0' : '1');
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}