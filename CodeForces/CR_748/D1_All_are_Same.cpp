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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        vector<int> v;
        for (auto si : s)
            v.push_back(si);
        sort(v.begin(), v.end());
        int res = 0;
        for (int i = 1; i < v.size(); i++)
            res = __gcd(res, v[i] - v[i - 1]);
        if (res == 0)
            cout << -1;
        else
            cout << res;
        cout << endl;
    }
}