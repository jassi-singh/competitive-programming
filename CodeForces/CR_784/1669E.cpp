#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
ll check(string s, bool type, map<pair<int, int>, int> mp)
{
    int ans = 0;
    for (int j = 0; j < 12; j++)
    {
        if (type && s[1] != 'a' + j)
        {
            ans += mp[make_pair(s[0], 'a' + j)];
        }
        if (!type && s[0] != 'a' + j)
        {
            ans += mp[make_pair('a' + j, s[1])];
        }
    }
    return ans;
}
void solve()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<pair<int, int>, int> mp;
        vector<string> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[make_pair(vec[i][0], vec[i][1])]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += check(vec[i], 1, mp);
            ans += check(vec[i], 0, mp);
        }
        cout << ans / 2 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}