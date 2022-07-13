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
        vector<int> cur = vector<int>(n, 0);
        for (int i = 0; i < n; i++)
            cin >> cur[i];
        for (int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin >> b >> s;
            for (char c : s)
            {
                if (c == 'D')
                    cur[i] = (cur[i] + 1) % 10;
                else
                    cur[i] = (10 + cur[i] - 1) % 10;
            }
        }
        for (int i = 0; i < n; i++)
            cout << cur[i] << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}