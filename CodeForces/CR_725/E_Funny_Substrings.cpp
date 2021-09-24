#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll countHaha(string s)
{
    ll cnt = 0;
    auto found = s.find("haha");
    while (found != string::npos)
    {
        cnt++;
        found = s.find("haha", found + 2);
    }
    return cnt;
}
struct myData
{
    ll count;
    string str;
};
string shrinkStr(string s)
{
    string str;
    int len = s.length();
    if (len >= 3)
    {
        for (int i = 0; i < len && i < 3; i++)
            str.push_back(s[i]);
        for (int i = len - 3; i < len; i++)
            str.push_back(s[i]);
    }
    else
    {
        str = s;
    }
    return str;
}
myData fun(myData a, myData b)
{
    string s1, s2;
    myData m;
    if (a.str.length() >= 3)
    {
        s1 = a.str.substr(a.str.length() - 3, 3);
    }
    else
    {
        s1 = a.str;
    }
    for (int i = 0; i < 3 && i < b.str.length(); i++)
        s1.push_back(b.str[i]);
    int newHaha = countHaha(s1);
    m.count = a.count + b.count + newHaha;
    string c = a.str + b.str;
    m.str = shrinkStr(c);
    return m;
}

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
        cin.ignore();
        map<string, myData> m1;
        string a, b, c, d, e;
        while (n--)
        {
            cin >> a >> b >> c;
            if (b == ":=")
            {
                m1[a].count = countHaha(c);
                m1[a].str = shrinkStr(c);
            }
            else
            {
                cin >> d >> e;
                string s1;
                if (m1[c].str.length() >= 3)
                {
                    s1 = m1[c].str.substr(m1[c].str.length() - 3, 3);
                }
                else
                {
                    s1 = m1[c].str;
                }
                for (int i = 0; i < 3 && i < m1[e].str.length(); i++)
                    s1.push_back(m1[e].str[i]);
                ll newHaha = countHaha(s1);
                m1[a].count = m1[c].count + m1[e].count + newHaha;
                m1[a].str = shrinkStr(m1[c].str + m1[e].str);
            }
        }
        cout << m1[a].count << endl;
    }
}