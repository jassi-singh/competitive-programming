#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = s.length();
        int c = a, d = b;
        if (n != a + b)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a--;
            else if (s[i] == '1')
                b--;
        }
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            if (s[i] == '?' && s[j] == '?')
            {
                if (a > b)
                {
                    s[i] = '0';
                    s[j] = '0';
                    if (i == j)
                        a--;
                    else
                        a -= 2;
                }
                else
                {
                    s[i] = '1';
                    s[j] = '1';
                    if (i == j)
                        b--;
                    else
                        b -= 2;
                }
                i++;
                j--;
            }
            else if (s[i] != '?' && s[j] == '?')
            {
                s[j] = s[i];
                if (s[i] == '1')
                    b--;
                else
                    a--;
                i++;
                j--;
            }
            else if (s[i] == '?' && s[j] != '?')
            {
                int t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
            else
            {
                i++;
                j--;
            }
        }
        int p = 0, q = 0;
        bool pd = check(s);
        for (auto c : s)
        {
            if (c == '0')
                p++;
            else
                q++;
        }
        if (p == c && q == d && pd)
            cout << s << endl;
        else
            cout << -1 << endl;
    }
}