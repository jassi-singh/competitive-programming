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
        int xa, ya;
        int xb, yb;
        int xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        if ((ya == yb) && (ya == yc))
        {
            if (((xc > xa) && (xc < xb)) || ((xc < xa) && (xc > xb)))
            {
                cout << abs(xa - xb) + abs(ya - yb) + 2;
            }
            else
            {
                cout << abs(xa - xb) + abs(ya - yb);
            }
        }
        else if ((xa == xb) && (xa == xc))
        {
            if (((yc > ya) && (yc < yb)) || ((yc < ya) && (yc > yb)))
            {
                cout << abs(xa - xb) + abs(ya - yb) + 2;
            }
            else
            {
                cout << abs(xa - xb) + abs(ya - yb);
            }
        }
        else
        {
            cout << abs(xa - xb) + abs(ya - yb);
        }
        cout << endl;
    }
}