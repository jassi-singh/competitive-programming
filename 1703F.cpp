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
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i + 1 > a)
                vec.push_back({a, i + 1});
        }
        sort(vec.begin(), vec.end());
        int sz = vec.size();
        long long ans = 0;
        for (int i = 0; i < sz; i++)
        {
            int j = i + 1;
            while (j < sz and vec[j].first <= vec[i].second)
                j++;
            ans += (sz - j) * 1ll;
        }
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}