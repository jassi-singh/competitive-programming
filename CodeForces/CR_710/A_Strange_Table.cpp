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
        ll n, m, x;
        cin >> n >> m >> x;
        ll r = (x - 1) % n + 1;
        ll c = ceil((double)x / (double)n);
        cout << m * (r - 1) + c << endl;
    }
}