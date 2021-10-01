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
        multimap<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            m.insert(make_pair(-k, i + 1));
        }
        vector<pair<int, int>> ans;
        while (1)
        {
            pair<int, int> p = *m.begin();
            m.erase(m.begin());
            pair<int, int> q = *m.begin();
            m.erase(m.begin());
            if (q.first == 0)
                break;
            p.first++;
            q.first++;
            ans.push_back(make_pair(p.second, q.second));
            m.insert(p);
            m.insert(q);
        }
        cout << ans.size() << endl;
        for (auto a : ans)
        {
            cout << a.first << " " << a.second << endl;
        }
    }
}