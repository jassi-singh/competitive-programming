#include <bits/stdc++.h>
using namespace std;
#define ll long long
string ans;
int solve(string s, int rounds, map<char, int> m)
{
    int l = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (m[s[i]] != 0)
        {
            if (m[s[i]] % rounds == 0)
            {
                l += m[s[i]] / rounds;
                ans.push_back(s[i]);
                m[s[i]] = 0;
                rounds--;
            }
            else
            {
                return -1;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    string k = s.substr(0, l);
    string t;
    int i = 0;
    while (k.length() != 0)
    {
        t += k;
        k.erase(remove(k.begin(), k.end(), ans[i]), k.end());
        i++;
    }
    if (t == s)
    {
        return l;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> m;
        string s;
        int rounds = 0;
        cin >> s;
        ans.clear();
        for (auto a : s)
        {
            m[a]++;
            if (m[a] == 1)
            {
                rounds++;
            }
        }
        int len = solve(s, rounds, m);
        if (len > 0)
        {
            for (int i = 0; i < len; i++)
                cout << s[i];
            cout << " ";
            for (auto a : ans)
                cout << a;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
}