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
        vector<int> a(n);
        vector<tuple<int, int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int l = 0; l < n - 1; l++)
        {
            int d = min_element(a.begin(), a.end()) - a.begin();
            vector<int> b;
            if (d != 0)
            {
                int p = d;
                for (int i = 0; i < n - l; i++)
                {
                    b.push_back(a[p]);
                    p++;
                    if (p == a.size())
                    {
                        p = 0;
                    }
                }
                a = b;
                ans.push_back(make_tuple(l + 1, n, d));
            }
            a.erase(a.begin());
        }
        cout << ans.size() << endl;
        for (auto a : ans)
        {
            cout << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << endl;
        }
    }
}