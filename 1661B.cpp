#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long

int mod = 32768;
int result(int n, int cnt)
{
    if (n == 0)
        return cnt;
    return min(result(n % mod + 1, cnt + 1), result(2 * (n % mod), cnt + 1));
}
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << result(n, 0) << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}