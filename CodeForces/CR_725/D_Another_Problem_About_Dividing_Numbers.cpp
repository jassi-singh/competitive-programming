#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int> dp;
int primefact(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int d = 2;
    while (n % d != 0 && d * d <= n)
        d++;
    if (d * d > n)
        d = n;
    return dp[n] = primefact(n / d) + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int mn, mx;
        if (a < b)
            swap(a, b);

        if (a == b)
            mn = 2;
        else if (a % b == 0)
            mn = 1;
        else
            mn = 2;

        mx = primefact(a) + primefact(b);
        if (a == b)
        {
            if (k == 0)
            {
                cout << "YES";
            }
            else if (k == 1)
            {
                cout << "NO";
            }
            else if (k >= mn && k <= mx)
                cout << "YES";
            else
                cout << "NO";
        }

        else if (k >= mn && k <= mx)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}