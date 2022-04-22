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
        int div;
        if (n >= 1900)
            div = 1;
        else if (n >= 1600)
            div = 2;
        else if (n >= 1400)
            div = 3;
        else
            div = 4;

        cout << "Division " << div << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}