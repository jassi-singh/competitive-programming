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
        bool ans = 0;
        while (n)
        {
            if (n % 2 == 1)
            {
                s.pop_back();
                n--;
            }
            else
            {
                if (s.substr(0, n / 2) != s.substr(n / 2))
                {
                    ans = false;
                    break;
                }
                else
                {
                    s = s.substr(0, n / 2);
                    n /= 2;
                }
            }
            ans = true;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}