#include <bits/stdc++.h>
using namespace std;
#define ceil(x, y) ceil((double)x / (double)y)
#define ll long long
void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    vector<vector<int>> ans;
    vector<int> keys;
    for (auto a : m)
    {
        keys.push_back(a.first);
    }

    while (1)
    {
        vector<int> k;
        for (auto a : m)
        {
            if (a.second != 0)
            {
                flag = false;
                k.push_back(a.second);
                m[a.first]--;
            }
            else
            {
                flag = true;
            }
        }
        ans.push_back(k);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}