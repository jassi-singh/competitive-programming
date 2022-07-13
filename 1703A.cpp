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
        bool ans = 1;
        for (int i = 0; i < 3; i++)
        {
            switch (i)
            {
            case 0:
                if (s[i] == 'y' || s[i] == 'Y')
                    ans *= 1;
                else
                    ans *= 0;
                break;
            case 1:
                if (s[i] == 'e' || s[i] == 'E')
                    ans *= 1;
                else
                    ans *= 0;
                break;
            case 2:
                if (s[i] == 's' || s[i] == 'S')
                    ans *= 1;
                else
                    ans *= 0;
                break;
            }
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