#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        ull ans = 1;
        while (n > 60)
        {
            ans = (ans * ((ull)pow(2, 60) % MOD)) % MOD;
            n -= 60;
        }
        if (n > 0)
        {
            ans = (ans * ((ull)pow(2, n - 1) % MOD)) % MOD;
        }
        cout << ans % MOD << endl;
    }
    return 0;
}