#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> ans;
vector<pair<int, int>> a;
int n;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

void solve(int l, int r, int d)
{
    if (l > r || l == n)
        return;
    int idx = l;
    for (int i = l; i <= r; i++)
        if (a[i] > a[idx])
            idx = i;
    ans[idx] = d;
    solve(l, idx - 1, d + 1);
    solve(idx + 1, r, d + 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ans.clear();
        ans = vector<int>(n);
        a.clear();
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.push_back(make_pair(k, i));
        }
        solve(0, n - 1, 0);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}