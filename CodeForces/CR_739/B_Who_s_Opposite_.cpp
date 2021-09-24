#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x;
        cin >> a >> b >> c;
        x = abs(a - b);
        if (x < 2 || c > 2 * x || a > 2 * x || b > 2 * x)
        {
            cout << -1;
        }
        else
        {
            if (c > x)
            {
                if (c - x > x)
                {
                    cout << -1;
                }
                else
                {
                    cout << c - x;
                }
            }
            else
            {
                cout << c + x;
            }
        }
        cout << endl;
    }
}