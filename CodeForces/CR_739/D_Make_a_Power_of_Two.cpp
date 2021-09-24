#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll m, ll n)
{
    ostringstream s1, s2;
    s1 << n;
    string a = s1.str();
    s2 << m;
    string b = s2.str();
    int i = 0, j = 0, ans = 0;
    while (a != b)
    {
        if (j >= b.length())
        {
            a.erase(a.begin() + i);
            ans++;
        }
        else if (i < a.length())
        {
            if (a[i] != b[j])
            {
                a.erase(a.begin() + i);
                ans++;
            }
            else
            {
                j++;
                i++;
            }
        }
        else
        {
            a = a + b.substr(j);
            ans += b.substr(j).size();
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = INT_MAX;
        for (ll i = 1; i < 1000000000000000000ll; i *= 2)
        {
            ans = min(ans, check(i, n));
        }
        cout << ans << endl;
    }
}