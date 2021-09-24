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
        int k;
        cin >> k;
        int sq = sqrt(k);
        if (sq == sqrt(k))
        {
            cout << sq << " " << 1;
        }
        else
        {
            int row, col;
            if (k - sq * sq <= sq)
            {
                row = k - sq * sq;
                col = sq + 1;
            }
            else
            {
                row = sq + 1;
                col = sq + 1 - (k - sq * sq) % (sq + 1);
            }
            cout << row << " " << col;
        }
        cout << endl;
    }
}