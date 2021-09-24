#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, vector<int>> a, pair<int, vector<int>> b)
{
    return a.second.size() > b.second.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v1(n);
        vector<pair<int, vector<int>>> v2;
        map<int, vector<int>> m1;
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            m1[v1[i]].push_back(i);
        }
        int total = 0;
        for (auto m : m1)
        {
            v2.push_back(make_pair(m.first, m.second));
            int s = m.second.size();
            total += min(k, s);
        }
        sort(v2.begin(), v2.end(), cmp);
        int each = total / k;
        total = each * k;
        int color = 0;
        for (auto v : v2)
        {
            if (v.second.size() >= k)
            {
                for (int i = 0; total > 0 && i < k; i++)
                {
                    ans[v.second[i]] = i + 1;
                    total--;
                }
            }
            else
            {
                for (int i = 0; total > 0 && i < v.second.size(); i++)
                {
                    ans[v.second[i]] = color % k + 1;
                    color++;
                    total--;
                }
            }
        }
        for (auto a : ans)
            cout << a << " ";
        cout << endl;
    }
}