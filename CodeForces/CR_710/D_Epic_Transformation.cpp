#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            m[k]++;
        }
        multimap<int, int> mm;
        int ans = 0;
        for (auto i : m)
        {
            mm.insert(make_pair(i.second, i.first));
        }
        while (1)
        {
            if (mm.size() == 1)
            {
                ans = (*mm.begin()).first;
                break;
            }
            auto it = mm.end();
            it--;
            pair<int, int> p = *it;
            mm.erase(it);
            it = mm.end();
            it--;
            pair<int, int> q = *it;
            mm.erase(it);
            if (q.first == 0)
            {
                ans = p.first;
                break;
            }
            p.first--;
            q.first--;
            mm.insert(p);
            mm.insert(q);
        }
        cout << ans << endl;
    }
}