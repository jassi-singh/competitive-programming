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
        map<char, int> m;
        string s;
        char k;
        cin >> k;
        s.push_back(k);
        m[k]++;
        for (int i = 1; i < n; i++)
        {
            char c;
            cin >> c;
            if (s[s.length() - 1] != c)
            {
                s.push_back(c);
                m[c]++;
            }
        }
        string ans = "YES";
        for (auto a : m)
        {
            if (a.second > 1)
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}