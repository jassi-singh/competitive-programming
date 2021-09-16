#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ull n, x, k;
        cin >> n >> x >> k;
        if (x % k == 0 || x % k == (n + 1) % k)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}